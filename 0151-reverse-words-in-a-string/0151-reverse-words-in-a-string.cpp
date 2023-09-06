#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        istringstream iss(s);
        vector<string> words;
        
        string word;
        while (iss >> word) {
            words.push_back(word);
        }
        
        reverse(words.begin(), words.end());
        
        string result;
        for (const string& w : words) {
            result += w + " ";
        }
        
        if (!result.empty()) {
            result.pop_back(); // Remove the trailing space
        }
        
        return result;
    }

    int main(){
        string input;
        // cin >> input;
        getline(cin, input);

        string output;
        output = Solution().reverseWords(input);
        cout << output << endl;
        return 0;

    }
};