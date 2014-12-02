$(document).ready(function(){
		var prefix = "arr";
		var test = ["This", "is", "yet", "another", "array", "arrays", "arrysu"];
		var newArray = createSubArrayWithoutPrefix(prefix, test);

});	
function createSubArrayWithoutPrefix(prefix, baseArray){
	var newtest = [];
	baseArray.forEach(function(temp){
		if(!foundPrefix(prefix, temp)){
			newtest[newtest.length] = temp;
		}
	});
	return newtest;
}
function foundPrefix(prefix, str){
	if(prefix.length > str.length){
		return false;
	}else{
		return (prefix == str.substring(0, prefix.length));
	}
}