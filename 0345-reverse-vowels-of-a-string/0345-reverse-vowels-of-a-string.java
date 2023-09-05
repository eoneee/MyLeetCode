
import java.util.Scanner;
public class Solution {
    public static String reverseVowels(String s){
        char[] charArray = s.toCharArray();
        String vowels = "aeiouAEIOU";
        int left = 0;
        int right = charArray.length -1;
        while(left < right){
            while(left < right && vowels.indexOf(charArray[left]) == -1){
                left++;
            }
            while(left < right && vowels.indexOf(charArray[right]) == -1){
                right--;
            }
            char temp = charArray[left];
            charArray[left] = charArray[right];
            charArray[right] = temp;
            left++;
            right--;
        }
        return new String(charArray);
    }
    public static void main(String[] args) {
        Solution solution = new Solution();
        Scanner sc = new Scanner(System.in);
        String s1 = sc.next();

        System.out.println(reverseVowels(s1));
    }
} 
