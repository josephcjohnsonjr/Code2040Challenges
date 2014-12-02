using System;

namespace reversestring
{
	class MainClass
	{
		public static void Main (string[] args)
		{
			String pass = ".siht esrever ot tnaw I";
			Console.WriteLine (reverseString(pass));
		}
		public static string reverseString(string str){
			string temp = "";
			foreach (char c in str) {
				temp = c + temp;
			}
			return temp;
		}
	}
}
