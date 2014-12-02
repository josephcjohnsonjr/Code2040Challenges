<?php
	date_default_timezone_set('America/Chicago'); //Set default date to central

	$string = "1997-07-16T19:20:30+01:00"; //Random ISO8610 formatted date
	$date = new DateTime($string); //Create new date object initiallized with the string
	$seconds = 50; //Seconds to add
	$date->add(new DateInterval("PT".$seconds."S")); //Add the seconds through php date interval format
	echo $date->format('Y-m-d H:i:s'); //Output date in specified format
?>