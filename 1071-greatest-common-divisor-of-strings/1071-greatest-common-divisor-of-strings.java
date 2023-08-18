import java.util.*;
class Solution {
    public String gcdOfStrings(String str1, String str2) {
        if(!(str1+str2).equals(str2+str1))
            return "";
        int gcdVal = gcd(str1.length(), str2.length());
        return str2.substring(0,gcdVal);
        
    }
    
    public static int gcd(int n, int m){
        if(m == 0)
            return n;
        else return gcd(m, n % m);
    }
}