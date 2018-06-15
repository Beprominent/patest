//
// Created by xie on 18-4-18.
//
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main(){
    char S[3] = {'W', 'T', 'L'};
    char Bet[3];
    float ans = 1.0;
    float profit;
    for (int i = 0; i < 3; i++) {
        int index = 0;
        float max_profit = 0;
        for (int j = 0; j < 3; ++j) {
            cin >> profit;
            if(max_profit < profit){
                index = j;
                max_profit = profit;
            }
        }
        ans = ans *  max_profit;
        Bet[i] = S[index];
    }
    for (int i = 0; i < 3; i++) {
        cout << Bet[i] << " ";
    }
    printf("%.2f", (ans * 0.65 -1)*2);
    return 0;
}


