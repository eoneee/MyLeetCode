#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> numCount;
        int maxx = 0;
        for(int num : nums){
            int complement = k - num;
            if(numCount.find(complement) != numCount.end() && numCount[complement] > 0){
                maxx++;
                numCount[complement]--;
            }else{
                numCount[num]++;
            }
        }
        return maxx;
        
    }
    int main(){
        int n;
        int k;
        cin >> n;
        vector<int> nums(n);
        for(int i = 0; i < n; i++){
            cin >> nums[i];
        }
        cin >> k;
        int result = maxOperations(nums, k);
        cout << result << endl;
        return 0;
    }
};