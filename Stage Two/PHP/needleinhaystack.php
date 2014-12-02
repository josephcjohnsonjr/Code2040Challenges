<?php
	$haystack = array("This", "is", "a", "haystack");
	$needle = "a";
	findNeedleInHaystack($needle, $haystack);
	function findNeedleInHaystack($needle, $haystack){
		$counter = -1;
		foreach ($haystack as $potentialNeedle) {
			$counter++;
			if($potentialNeedle == $needle){
				echo "Needle: ".$needle." is at index ". $counter.".";
			}
		}
	}
?>