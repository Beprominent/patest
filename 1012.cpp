//
// Created by xie on 18-4-18.
//
#include <iostream>
#include <algorithm>
using namespace std;

struct node {
    int id, best;  //the index of best subject
    int score[4], rank[4];
}stu[2005];

int exist[1000000], flag = -1;
bool cmp1(node a, node b) {
    return a.score[flag] > b.score[flag];
}

int main(){
    int m, n, id;
    cin >> m >> n;
    for(int i = 0; i < m; i++){
        cin >> stu[i].id >> stu[i].score[1] >> stu[i].score[2] >> stu[i].score[3];
        stu[i].score[0] = (stu[i].score[1] + stu[i].score[2] + stu[i].score[3]) / 3.0 + 0.5;
    }
    for(flag = 0; flag <= 3; flag++){
        sort(stu, stu + n, cmp1);
        stu[0].rank[flag] = 1;
        for(int i = 1; i < m; i++){
            stu[i].rank[flag] = i + 1;
            if(stu[i].score[flag] == stu[i-1].score[flag])
                stu[i].rank[flag] = stu[i-1].rank[flag];
        }
    }
    for(int i = 0; i < m; i++){
        exist[stu[i].id] = i + 1;
        stu[i].best = 0;
        int minn = stu[i].rank[0];
        for(int j = 1; j <= 3; j++){
            if(stu[i].rank[j] < minn){
                minn = stu[i].rank[j];
                stu[i].best = j;
            }
        }
    }
    char c[5] = {'A', 'C', 'M', 'E'};
    for(int i = 0; i < n; i++){
        cin >> id;
        int temp = exist[id];
        if(temp){
            int best = stu[temp -1].best;
            cout << stu[temp-1].rank[best] << c[best] << endl;
        }else{
            cout << "N/A" << endl;
        }
    }
    return 0;
}
