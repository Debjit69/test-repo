<?php
$str=strtolower($_POST['string']);
$count=0;
for($i=0;$i<strlen($str);$i++){
    $char=$str[$i];
    if($char== 'a'|| $char== 'e'|| $char== 'i'|| $char== 'o'|| $char== 'u'){
        echo" $char is at position $i<br>";
        $count++;
    }
}
echo "<br> the total number of vowel are $count";
?>