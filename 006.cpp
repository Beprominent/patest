//
// Created by xie on 18-5-22.
//

#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        int len = s.length();
        int nodeLen = 2*numRows-2;//两整列之间的差 也就是等差数列中的d
        string result = "";

        /*
         * 这个非常重要，如果没有的话，有样例跑不通
         */
        if (len == 0 || numRows == 0 || numRows == 1)//特殊情况特殊处理
            return s;

        for (int i = 0; i < numRows; i++)//从第一行遍历到最后一行
            for (int j = i; j < len; j += nodeLen) {
                result += s.at(j);//第一行和最后一行 还有普通行的整列数字
                if (i != 0 && i != numRows-1 && j - 2*i + nodeLen < len)
                    result += s.at(j - 2*i + nodeLen);//单列行的数字
            }
        return result ;
    }
};

int main(){
    string s;
    int numRows;
    Solution solution;
    cin >> s >> numRows;
    cout << solution.convert(s, numRows) << endl;
}

