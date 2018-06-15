//
// Created by xie on 18-5-21.
//

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        string result;
        int mmax = -1;
        int length = s.length();
        for(int i = 0; i < length; i++){
            int length1 = 0;
            int low1 = i, high1 = i + 1; // 情况一，回文串为偶数串
            while (low1 >= 0 && high1 < length){
                if(s[low1] == s[high1]) {
                    length1 += 2;
                    low1--;
                    high1++;
                }
                else {
                    break;
                }
            }
            if (length1 > mmax) {
                mmax = length1;
                result.erase(result.begin(), result.end());
                for (int j = low1 + 1; j <= high1 - 1; j++) {
                    result.push_back(s[j]);
                }
            }

            int length2 = 1;
            int low2 = i - 1, high2 = i + 1; // 情况二，回文串为奇数串
            while (low2 >= 0 && high2 < length){
                if(s[low2] == s[high2]) {
                    length2 += 2;
                    low2--;
                    high2++;
                }
                else {
                    break;
                }
            }
            if (length2 > mmax) {
                mmax = length2;
                result.erase(result.begin(), result.end());
                for (int j = low2 + 1; j <= high2 - 1; j++) {
                    result.push_back(s[j]);
                }
            }
        }
        return result;
    }
};

int main(){
    string string1;
    cin >> string1;
    Solution solution;
    cout << solution.longestPalindrome(string1) << endl;
    return 0;
}