//
// Created by xie on 18-5-22.
//

#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        long temp = 0;
        if(x < 0)
            return false;
        int num = x;
        while(x > 0){
            temp = temp * 10;
            temp += x % 10;
            x /= 10;
        }
        return num == temp;
    }
};

int main(){
    Solution solution;
    int x;
    cin >> x;
    cout << solution.isPalindrome(x) << endl;
    return 0;
}