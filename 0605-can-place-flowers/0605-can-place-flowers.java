import java.util.Scanner;
class Solution {
    public boolean canPlaceFlowers(int[] flowerbed, int n) {
        int count = 0;
        int i = 0;
        
        while(i < flowerbed.length){
            if(flowerbed[i] == 0){
                if(i == 0 || flowerbed[i-1] == 0){
                    if(i == flowerbed.length -1 || flowerbed[i+1] == 0){
                        flowerbed[i] = 1;
                        count++;
                    }
                }
            }
            i++;
        }
        return count >= n;
        
    }
    public static void main(String[] args){
        Solution solution = new Solution();
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] flowerbed = new int[n];
        for(int i = 0; i < n; i++){
            flowerbed[i] = sc.nextInt();
        }
        int newFlowers = sc.nextInt();
        boolean result = solution.canPlaceFlowers(flowerbed,newFlowers);
    System.out.println(result);
    }
}