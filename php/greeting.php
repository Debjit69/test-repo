<?php
$d=date('H');
if($d>5 && $d<12)
echo "good morning!";
else if($d>=12 && $d<16)
echo "good afternoon!";
else if($d>=16 && $d<19)
echo "good evening!";
else
echo "good night!";
?>