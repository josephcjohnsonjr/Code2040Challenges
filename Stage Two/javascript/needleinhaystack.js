function findNeedleInHaystack(needle, haystack){
	var counter = -1;
	haystack.forEach(function(potentialNeedle){
		counter++;
		if(potentialNeedle == needle){
			alert("Needle: "+ needle + " is at index "+ counter);
		}
	});
}