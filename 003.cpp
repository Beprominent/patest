//
// Created by xie on 18-5-20.
//


#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;
class Solution {
public:
//    int lengthOfLongestSubstring(string s){
//        int begin, i, j, mmax = 0;
//        int hash[256];
//        for(i = 0; i < s.size(); i++){
//            memset(hash, 0, sizeof(hash));
//            hash[s[i]] = 1;  //标记字符存在
//            for(j = i + 1; j < s.size(); j++){
//                if(hash[s[j]] == 0){
//                    hash[s[j]] = 1;
//                }else{
//                    break;
//                }
//            }
//            if(j - i > mmax){
//                mmax = j - i;
//            }
//        }
//        return mmax;
//    }

//使用后缀数组
    int longestlen(char * p){
        int hash[256];
        int len = 0;
        memset(hash, 0, sizeof(hash));
        while (*p && !hash[*p]){
            hash[*p] = 1;
            len ++;
            p ++;
        }
        return len;
    }

    int lengthOfLongestSubstring(char * str){
        int maxlen = -1;
        char *a[9999];
        int index = 0;
        int length = strlen(str);
        while(*str != '\0'){
            a[index++] = str++;
        }
        for(int i = 0; i < length; i++){
            int length = longestlen(a[i]);
            if(length > maxlen){
                maxlen = length;
            }
        }
        return maxlen;
    }
};

int main(){
    char *str;
    cin >> str;
    Solution solution;
    cout << solution.lengthOfLongestSubstring(str) << endl;
}