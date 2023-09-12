#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {


    int i = 0;
    int j = 0;

    while (i < s.length() && j < t.length()) {
        if (s[i] == t[j]) {
            i++;
        }
        j++;
    }

    return i == s.length();
}

int main() {
    string word;
    string words;
    cin >> word >> words;
    cout << Solution().isSubsequence(word, words) << endl; // Output: true

    return 0;
}
    
};