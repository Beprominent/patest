//
// Created by xie on 18-5-3.
//
#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;
struct bag{
    int v;
    double p;
}Bag[10010];

double dp[10010];


int main(){
    int T,N;
    double p;
    cin >> T;
    while (T--){
        int sum = 0;
        cin >> p >> N;
        for(int i = 0; i < N; i++){
            cin >> Bag[i].v >> Bag[i].p;
            sum += Bag[i].v;
        }
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        for(int i = 0; i < N; i++){
            for (int j = sum; j >= Bag[i].v; j--) {
                dp[j] = max(dp[j], (dp[j - Bag[i].v] * (1 - Bag[i].p)));
            }
        }
        for(int i = sum; i >= 0; i--){
            if(dp[i] > 1-p){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}