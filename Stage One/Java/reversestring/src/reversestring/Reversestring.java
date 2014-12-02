package reversestring;
import java.lang.StringBuilder;
public class Reversestring {
    
    public static void main(String[] args) {
        String temp = ".siht esrever ot ekil dluow I";
        System.out.println(reverseString(temp));
    }
    public static String reverseString(String str){
        str = new StringBuilder(str).reverse().toString();
        return str;
    }
    
}
