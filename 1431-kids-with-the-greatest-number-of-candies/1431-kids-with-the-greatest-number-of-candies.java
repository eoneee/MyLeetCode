
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int maxCandies = 0;
        for (int candyCount : candies) {
            maxCandies = Math.max(maxCandies, candyCount);
        }
        List<Boolean> result = new ArrayList<>();
        for (int kidCandies : candies) {
            result.add(kidCandies + extraCandies >= maxCandies);
        }
        return result;
    }

    public static void main(String[] args) {
        Solution solution = new Solution();
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] candies = new int[n];
        for (int i = 0; i < n; i++) {
            candies[i] = scanner.nextInt();
        }

        int extraCandies = scanner.nextInt();
        List<Boolean> result = solution.kidsWithCandies(candies, extraCandies);
        
        for (boolean b : result) {
            System.out.print(b + " ");
        }
    }
}