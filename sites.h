const char DeBrujin[] PROGMEM = R"=====(
<html>
<head>
    <title>RX Config</title>
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
            <a class="myButton" href="/rxconfig">RX Config</a>
            <a class="myButton" href="/txconfig">TX Config</a>
            <a class="myButton" href="/bruteforce">Brute Force</a>
      <a class="myButton" href="/viewlog">RX Log</a>
      <a class="myButton" href="/delete">Delete Log</a>
        </ul>
    </div>
</div>
<hr>
</center>
<br>
<FORM action="/dodbj" method="post" id="config" target="iframe">
    <p>You are going to start a DeBrujin Attack</p>
    <p>Stay near the target...</p>
    <hr>
    <INPUT class="submitBtn" type="submit" value="Apply">
</form>
<br>
<hr>
<br>
<iframe style="visibility: hidden;" src="http://" )+local_IPstr+"/setrx" name="iframe"></iframe>
</body>
</html>
)=====";
