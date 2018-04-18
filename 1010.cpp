//
// Created by xie on 18-4-18.
//
#include <iostream>
#include <string.h>
using namespace std;

long long int Cal(char c){
    if('0' <= c && c <= '9'){
        return (c - '0');
    }else{
        return (c - 'a' + 10);
    }
}

long long CalRadix(char t[], long long int radix){
    long long int result = 0;
    for (int i = 0; i < strlen(t); i++) {
        result *= radix;
        result += Cal(t[i]);
        if(result < 0){
            result = -1;
        }
    }
    return result;
}

int main(){
    char a[15], b[15];
    int tag;
    long long int valueA, valueB;
    long long int maxRadix, minRadix;
    long long int radixA, radixB;
    cin >> a >> b >> tag >> radixA;
    if(tag == 2){
        char temp[15];
        strcpy(temp, a);
        strcpy(a, b);
        strcpy(b, temp);
    }
    valueA = CalRadix(a, radixA);
    minRadix = 0;
    for (int i = 0; i < strlen(b); i++) {
        if(minRadix < Cal(b[i])){
            minRadix = Cal(b[i]) + 1;
        }
    }
    maxRadix = valueA + 1;
//binary search
    while(minRadix <= maxRadix){
        radixB = (minRadix + maxRadix) / 2;
        valueB = CalRadix(b, radixB);
        if(valueB == -1 || valueB > valueA){
            maxRadix = radixB -1;
        }else if(valueB < valueA){
            minRadix = radixB + 1;
        }else if(valueB == valueA){
            cout << radixB;
            return 0;
        }
    }
    cout << "Impossible";
    return 0;
}