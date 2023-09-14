#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxx = -1e4;
        int n = nums.size();
        // int end = start + k;
        double sum = 0;
        for(int i = 0; i < k; i++){
            sum += nums[i];
        }
        maxx = sum / k;
        maxx = floor(maxx * 100000.f + 0.5)/100000.f;
        
        for(int i = k; i < n; i++){
            sum += nums[i] - nums [i - k];
            double temp = sum / k;
            temp = floor(temp * 100000.f + 0.5)/100000.f;
            if(maxx < temp){
                maxx = temp;
            }
        }
            // start++;
        return maxx;
    }
    int main(){
        int n, k;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i ++){
            cin >> arr[i];
        }
        cin >> k;
        cout << findMaxAverage(arr, k) << endl;
        return 0;
    }
        
};

