#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    int compress(vector<char>& chars) {

        int n = chars.size();
        if (n <= 1) {
            return n;
        }

        int writeIndex = 0; 
        int temp = 0; 

        for (int readIndex = 1; readIndex <= n; readIndex++) {
            if (readIndex == n || chars[readIndex] != chars[temp]) {
                chars[writeIndex++] = chars[temp];

                if (readIndex - temp > 1) {
                    string count = to_string(readIndex - temp);
                    for (char c : count) {
                        chars[writeIndex++] = c;
                    }
                }

                temp = readIndex;
            }
        }

        return writeIndex;
    }
};