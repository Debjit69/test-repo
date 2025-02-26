 <?php
 $n=$_POST['number'];
 $sum=0;
 while($n>0){
    $d=$n%10;
    $sum+=$d;
    $n=(int)($n/10);
 }
 echo "sum of the digits is:".$sum;
 ?>