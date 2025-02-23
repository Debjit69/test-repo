<?php
$fname=strtolower(trim($_POST['fname']));
$mname=strtolower(trim($_POST['mname']));
$lname=strtolower(trim($_POST['lname']));

$name= $fname;
if($mname != "")
$name = $name ." " .$mname;
$name = $name ." ".$lname;
$name = ucwords($name);
echo "my name is: $name";