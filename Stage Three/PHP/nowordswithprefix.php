<?php
	
	$prefix = "foo";
	$array = array();
	$array[] = "fooey";
	$array[] = "foobar";
	$array[] = "bar";
	$array[] = "foebar";
	$array[] = "foos";
	$newArray = array();
	for($i = 0; $i < count($array); $i++){
		if(!isPrefix($pre, $array[$i])){
			$newArray[] = $array[$i];
		}
	}
	//$newArray[] should now contain "bar" and "foebar"
	function isPrefix($prefix, $string){
		if(strlen($prefix) > strlen($string)){
			return false;
		}
		else{
			return (substr($string, 0, strlen($prefix)) == $prefix);
		}
	}
?>