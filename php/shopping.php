<html>
    <head>
        <title>simple shopping cart </title>
</head>
<body>
    <h2>simple shopping cart calculator</h2>
    <form action="" method="post">
        <table border="1" cellpadding="10">
            <tr>
                <th>product</th>
                <th>price</th>
                <th>quantity</th>
</tr>
<tr>
    <td>notebook</td>
    <td>rs.50</td>
    <td><input type="number" name="qty_notebook" min="0" value="0"></td>
</tr>
<tr>
    <td>pen</td>
    <td>rs.40</td>
    <td><input type="number" name="qty_pen" min="0" value="0"></td>
</tr>
<tr>
    <td>backpack</td>
    <td>rs.500</td>
    <td><input type="number" name="qty_backpack" min="0" value="0"></td>
</tr>
<tr>
    <td>waterbottle</td>
    <td>rs.100</td>
    <td><input type="number" name="qty_waterbottle" min="0" value="0"></td>
</tr>
<tr>
    <td>calculator</td>
    <td>rs.500</td>
    <td><input type="number" name="qty_calculator" min="0" value="0"></td>
</tr>
</table><br><br>
<input type="reset"><br><br>
<input type="submit" name="calculate" value="calculate Bill">
</form>
<?php
if(isset($_POST['calculate'])){
$price_notebook=50;
$price_pen=40;
$price_backpack=500;
$price_waterbottle=100;
$price_calculator=500;
$qty_notebook=$_POST['qty_notebook']?? 0;
$qty_pen=$_POST['qty_pen']?? 0;
$qty_backpack=$_POST['qty_backpack']?? 0;
$qty_waterbottle=$_POST['qty_waterbottle']?? 0;
$qty_calculator=$_POST['qty_calculator']?? 0;

$total=($qty_notebook*$price_notebook)+($qty_pen*$price_pen)+($qty_backpack*$price_backpack)+($qty_waterbottle*$price_waterbottle)*
($qty_calculator*$price_calculator);

$gst=$total*0.18;
$grand_total=$total+$gst;

echo "<h3>Bill summary</h3>";
echo "<table border='1' cellpadding='10'>";
echo "<tr><th>Item</th><th>quantity</th><th>sub total</th></tr>";
if($qty_notebook>0)
echo"<tr><td>notebook</tr><td>$qty_notebook</td><td>($qty_notebook*$price_notebook)</td></tr>";
if($qty_pen>0)
echo"<tr><td>pen</tr><td>$qty_pen</td><td>($qty_pen*$price_pen)</td></tr>";
if($qty_backpack>0)
echo"<tr><td>backpack</tr><td>$qty_backpack</td><td>($qty_backpack*$price_backpack)</td></tr>";
if($qty_waterbottle>0)
echo"<tr><td>waterbottle</tr><td>$qty_waterbottle</td><td>($qty_waterbottle*$price_waterbottle)</td></tr>";
if($qty_calculator>0)
echo"<tr><td>calculator</tr><td>$qty_calculator</td><td>($qty_calculator*$price_calculator)</td></tr>";

echo "<tr><td colspan='2><strong>Total</strong></td><td><strong>$total</strong></td></tr>";
echo "<tr><td colspan='2><strong>GST(18%)</strong></td><td><strong>$gst</strong></td></tr>";
echo "<tr><td colspan='2><strong>Grand Total</strong></td><td><strong>$grand_total</strong></td></tr>";
echo "</table>";
}
?>
</body>
</html>

