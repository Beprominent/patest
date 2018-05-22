//
// Created by xie on 18-5-22.
//

#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long result = 0;
        int temp = abs(x);
        while (temp > 0){
            result *= 10;
            result += temp % 10;
            if(result > pow(2, 31)){
                return 0;
            }
            temp /= 10;
        }
        return (int)(x >= 0 ? result: -result);
    }
};

int main(){
    Solution solution;
    int x;
    cin >> x;
    cout << solution.reverse(x) << endl;
    return 0;
}