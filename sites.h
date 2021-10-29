const char DeBrujin[] PROGMEM = R"=====(
<html>
<head>
    <title>DeBrujin</title>
    <meta charset="utf-8">
    <style>
        body {
            background-color: #333333;
            font-family: "Century Gothic", Arial;
            color: white;
            margin: 20px;
        }
        .myButton:link, .myButton:visited {
            background: linear-gradient(#777777, #444444);
            color: white;
            padding: 4px;
            width: 600px;
            height: 90px;
            border-radius: 5px;
            border: 2px solid white;
            text-align: center;
            margin-right: 90px;
            margin-left: 90px;
            margin-bottom: 90px;
            text-decoration: none;
            display: inline-block;
            transition: 0.25s;
            font-size: 60px;
        }
        .myButton:hover, .myButton:active {
            background: linear-gradient(#888888, #555555);
            border: 2px solid deepskyblue;
            border-radius: 10px;
            transform:scale(1.15);
        }
        .submitBtn {
            background: linear-gradient(#777777, #444444);
            color: white;
            padding: 4px;
            width: 900px;
            height: 300px;
            border-radius: 2.5px;
            border: 2px solid white;
            text-align: center;
            transition: 0.25s;
            font-size: 90px;
        }
        .submitBtn:hover, .submitBtn:active {
            background: linear-gradient(#888888, #555555);
            border: 2px solid deepskyblue;
        }
        .sub {
            font-size: 90px;
        }

        }
    </style>
</head>
<body>
<center>
<div id="header">
    <div id="menu">
        <ul>
            <a class="myButton" href="/">Menu</a>
            <a class="myButton" href="/debrujin">DeBrujin Attack</a>
        </ul>
    </div>
</div>
<hr><hr>
<br>
<form action="/dodbj" method="post" id="config" target="/success">
    <p class="sub">You are going to start a DeBrujin Attack</p>
    <p class="sub">Stay near the target...</p>
    <br>
    <br><br>
    <INPUT class="submitBtn" type="submit" value="Send">
</form>
<br><br><br><br><br><br>
<hr><hr>
<br>
</center>
</body>
</html>
)=====";

const char Success[] PROGMEM = R"=====(
<html>
<head>
    <title>Success</title>
    <meta charset="utf-8">
</head>
<body>
<center>
    <p>Attack sent succesfully :)</p>
</center>
</body>
</html>
)=====";

const char Menu[] PROGMEM = R"=====(
<html>
<head>
    <title>DeBrujin</title>
    <meta charset="utf-8">
    <style>
        body {
            background-color: #000000;
            font-family: "Century Gothic", Arial;
            color: white;
            margin: 20px;
        }
       .button-30 {
          align-items: center;
          appearance: none;
          background-color: #FCFCFD;
          border-radius: 40px;
          border-width: 0;
          box-shadow: rgba(45, 35, 66, 0.4) 0 2px 4px,rgba(45, 35, 66, 0.3) 0 7px 13px -3px,#D6D6E7 0 -3px 0 inset;
          box-sizing: border-box;
          color: #36395A;
          cursor: pointer;
          display: inline-flex;
          font-family: "JetBrains Mono",monospace;
          width: 800px;
          height: 200px;
          justify-content: center;
          line-height: 1;
          list-style: none;
          overflow: hidden;
          padding-left: 16px;
          padding-right: 16px;
          position: relative;
          text-align: left;
          text-decoration: none;
          transition: box-shadow .15s,transform .15s;
          user-select: none;
          -webkit-user-select: none;
          touch-action: manipulation;
          white-space: nowrap;
          will-change: box-shadow,transform;
          font-size: 80px;
        }
        .button-30:focus {
          box-shadow: #D6D6E7 0 0 0 1.5px inset, rgba(45, 35, 66, 0.4) 0 2px 4px, rgba(45, 35, 66, 0.3) 0 7px 13px -3px, #D6D6E7 0 -3px 0 inset;
        }
        .button-30:hover {
          box-shadow: rgba(45, 35, 66, 0.4) 0 4px 8px, rgba(45, 35, 66, 0.3) 0 7px 13px -3px, #D6D6E7 0 -3px 0 inset;
          transform: translateY(-2px);
        }
        .button-30:active {
          box-shadow: #D6D6E7 0 3px 7px inset;
          transform: translateY(2px);
        }
        .title {
            font-size: 100px;
            font-family: Monaco, Monospace;
        }
        .sub {
            font-size: 70px;
            font-family: "Lucida Handwriting", Cursive;
        }
        }
    </style>
</head>
<body>
<center>
<br>
<h1 class="title">Nix</h1>
<p class="sub">The RF DeBrujin sequence transmitter for EvilCrowRF.</p>
<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br>
<div id="header">
    <div id="menu">
        <ul>
            <a class="button-30" href="/debrujin">DeBrujin Attack</a>
        </ul>
    </div>
</div>
</center>
</body>
</html>
)=====";
