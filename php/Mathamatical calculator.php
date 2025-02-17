<html>
    <head>
        <title>mathametical calculator</title>
</head>
<body>
    <form action="calculate.php" method="post">
        <label>enter 1st number:</label><br><br>
        <input type="number" name="num1" required><br><br>
        <label>enter 2nd number:</label><br><br>
        <input type="number" name="num2" required><br><br>
        <label>enter your choice:</label><br><br>
        <select name="choice">
            <option value="add">Addition</option>
            <option value="sub">subtraction</option>
            <option value="mul">multiply</option>
            <option value="div">division</option>
</select>
<br><br>
<input type="reset"><br><br>
<input type="submit" value="submit">
</form>
</body>
</html>
