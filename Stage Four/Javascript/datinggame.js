var seconds = 30;
var str = "1997-07-16T19:20:30+01:00";
var somedate = new Date(str);
somedate.setSeconds(somedate.getSeconds() + seconds);
alert(String(somedate.getSeconds())); //0