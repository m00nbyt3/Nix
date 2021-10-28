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
            min-width: 100px;
            border-radius: 5px;
            border: 2px solid white;
            text-align: center;
            margin-right: 20px;
            text-decoration: none;
            display: inline-block;
            transition: 0.25s;
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
            min-width: 100px;
            border-radius: 2.5px;
            border: 2px solid white;
            text-align: center;
            transition: 0.25s;
        }
        .submitBtn:hover, .submitBtn:active {
            background: linear-gradient(#888888, #555555);
            border: 2px solid deepskyblue;
        }
        .console{
            width: 99%;
            background-color: black;
            color: white;
            font-family: monospace;
            padding: 5px;
            border: 0px;
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
      <a class="myButton" href="/viewlog">RX Log</a>
      <a class="myButton" href="/delete">Delete Log</a>
        </ul>
    </div>
</div>
<hr>
</center>
<br>
<form action="/dodbj" method="post" id="config" target="/success">
    <p>You are going to start a DeBrujin Attack</p>
    <p>Stay near the target...</p>
    <hr>
    <INPUT class="submitBtn" type="submit" value="Send">
</form>
<br>
<hr>
<br>
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
