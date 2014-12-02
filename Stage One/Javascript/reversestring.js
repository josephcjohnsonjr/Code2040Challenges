function reverseString(str){
	var temp = "";
	for(var index = str.length; index > 0; index--){
		temp += str[index-1];
	}
	return temp;
}