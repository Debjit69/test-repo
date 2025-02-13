<?php
$n1=$_POST['num1'];
$n2=$_POST['num2'];
$n3=$_POST['num3'];
if($n1>$n2 && $n1>$n3)
echo "maximum no. is:",$n1;
elseif($n2>$n1 && $n2>$n3)
echo"maximum no is:",$n2;
else
echo"maximum no is:",$n3;
?>
