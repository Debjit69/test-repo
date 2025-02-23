<?php

	function isPrime($number) 
	{
    		// Numbers less than 2 are not prime
    		if ($number < 2) 
		{
        		return false;
    		}

    		// 2 is the only even prime number
    		if ($number == 2) 
		{
        		return true;
    		}

    		// Even numbers greater than 2 are not prime
    		if ($number % 2 == 0) 
		{
        		return false;
    		}

    		// Check for divisibility from 3 up to the square root of the number
    		for ($i = 3; $i <= sqrt($number); $i += 2) 
		{
        		if ($number % $i == 0) 
			{
            			return false;
        		}
    		}

    		return true;
	}

	$num = $_POST['num'];

	if (isPrime($num)) 
	{
    		echo $num . " is a prime number.";
	} 
	else 
	{
    		echo $num . " is not a prime number.";
	}
	
?>
