<html>

<head>
    <title>current digital clock</title>
    <meta http-equiv="refresh" content="1">
</head>

<body>
    <h2>current time</h2>
    <?php
    $cur = date('h-i-s');
    echo "<h3>" . $cur . "</h3>";

    ?>
</body>

</html>