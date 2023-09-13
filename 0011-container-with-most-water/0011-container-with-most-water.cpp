#include <vector>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxx = 0;
        int left = 0;
        int right = height.size() - 1;
        
        while(left < right){
            int h = min(height[left], height[right]);
            int w = right - left;
            int water = h * w;
            maxx = max(maxx, water);
            
            if(height[left] < height[right]){
                left++;
            }else{
                right--;
            }
            
        }
        return maxx;
    }
    int main(){
        int n;
        cin >> n;
        
        vector<int> height(n);
        for(int i = 0; i < n; i++){
            cin >> height[i];
        }
        int result = maxArea(height);
        cout << result << endl;
        
        return 0;
    }
};