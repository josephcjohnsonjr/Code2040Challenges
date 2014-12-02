using System;

namespace findNeedleInHaystack
{
	class MainClass
	{
		public static void Main (string[] args)
		{
			String[] haystack = {"This", "is", "an", "array", "of", "strings"};
			String needle = "of";
			findNeedle (needle, haystack);
		}
		public static void findNeedle(String needle, String[] haystack){
			for (int index = 0; index < haystack.Length; index++) {
				if (needle == haystack [index]) {
					Console.WriteLine ("Needle \"" + needle + "\" was found at index " + index);
				}
			}
		}
	}
}
