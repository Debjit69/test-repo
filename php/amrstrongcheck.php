<?php
$n=$_POST['num'];
$s=$n;
$r=0;
while($n>0){
    $d=($n%10);
    $r=$r+($d*$d*$d);
    $n=(int)($n/10);
}
if($r==$s)
echo "$s is armstrong";
else
echo "$s is not armstrong";
?>