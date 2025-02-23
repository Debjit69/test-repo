<?php
function isPalindrome($str) {
    $str = preg_replace("/[^A-Za-z0-9]/", '', $str);
    $str = strtolower($str);

    $reversedStr = strrev($str);

    if ($str === $reversedStr) {
        return true;
    } else {
        return false;
    }
}

$inputString = "A man, a plan, a canal, Panama";

if (isPalindrome($inputString)) {
    echo "The string is a palindrome.";
} else {
    echo "The string is not a palindrome.";
}
?>
