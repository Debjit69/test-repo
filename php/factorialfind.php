<?php
$n=$_POST['number'];
$f=1;
for($i=$n;$i>=1;$i--){
    $f=$f*$i;
}
echo "factorial of $n is:$f";
?>
