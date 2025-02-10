<?php
$n1=$_POST['num1'];
$n2=$_POST['num2'];
echo "numbers before swapping:",$n1, "and",$n2;
$n3=$n1;
$n1=$n2;
$n2=$n3;
echo "numbers after swapping:",$n1,"and",$n2;

?>