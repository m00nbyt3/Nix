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
