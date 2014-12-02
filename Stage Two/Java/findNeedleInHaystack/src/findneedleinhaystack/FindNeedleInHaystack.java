package findneedleinhaystack;

public class FindNeedleInHaystack {

    public static void main(String[] args) {
        String[] haystack = {"This", "is", "an", "array", "of", "strings"};
        String needle = "of";
        findNeedle (needle, haystack);
    }
    public static void findNeedle(String needle, String[] haystack){
            for (int index = 0; index < haystack.length; index++) {
                    if (needle == haystack [index]) {
                            System.out.println("Needle \"" + needle + "\" was found at index " + index);
                    }
            }
    }
}
