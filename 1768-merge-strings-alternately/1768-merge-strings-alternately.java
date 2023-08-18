import java.util.*;
class Solution {
    public String mergeAlternately(String word1, String word2) {
        int n = word1.length();
        int m = word2.length();
        int i = 0;
        int j = 0;
        String result = "";
        while(i < n || j < m){
            if(i<n)
                result += word1.charAt(i++);
            if(j<m)
                result += word2.charAt(j++);
        }
        return result;     
    }
}