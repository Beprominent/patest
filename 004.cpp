//
// Created by xie on 18-5-20.
//

#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
class Solution {
public:
    //mergesort
//    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//        vector<int> nums;
//        int length1 = nums1.size();
//        int length2 = nums2.size();
//        int m = 0, n = 0;
//        if(nums1.empty()){
//            if(length2 % 2 == 1){
//                return 1.0 * nums2[length2 / 2];
//            }else{
//                return 1.0 * (nums2[length2 / 2] + nums2 [length2 / 2 - 1]);
//            }
//        }
//        if(nums1.empty()){
//            if(length2 % 2 == 1){
//                return 1.0 * nums2[length2 / 2];
//            }else{
//                return 1.0 * (nums2[length2 / 2] + nums2 [length2 / 2 - 1]) / 2;
//            }
//        }
//        while(m < length1 && n < length2){
//            if(nums1[m] < nums2[n]){
//                nums.push_back(nums1[m]);
//                m++;
//            }else{
//                nums.push_back(nums2[n]);
//                n++;
//            }
//        }
//        while(m < length1){
//            nums.push_back(nums1[m]);
//            m++;
//        }
//        while(n < length2){
//            nums.push_back(nums2[n]);
//            n++;
//        }
//        if((m + n) % 2 ==1){
//            return 1.0 * nums[(m + n) / 2];
//        }else{
//            return (nums2[(m + n) / 2] + nums2 [(m + n) / 2 - 1]) / 2.0;
//        }
//    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
        int m = nums1.size();
        int n = nums2.size();
        if(m > n){   //保证数组１最短
            return findMedianSortedArrays(nums2, nums1);
        }
        int L1 = 0, L2 = 0, R1 = 0, R2 = 0, c1 = 0, c2 = 0, lo = 0, hi = 2 * m;  //加入虚拟'#'，所以数组１是2*n长度
        while (lo <= hi){
            c1 = (lo + hi) / 2;
            c2 = m + n - c1;
            L1 = (c1 == 0)?INT8_MIN:nums1[(c1 -1) / 2];
            R1 = (c1 == 2 * m)?INT8_MAX:nums1[c1 / 2];
            L2 = (c2 == 0)?INT8_MIN:nums2[(c2 - 1) / 2];
            R2 = (c2 == 2 * n)?INT8_MAX:nums2[c2 / 2];

            if(L1 > R2)
                hi = c1 - 1;
            else if(L2 > R1)
                lo = c1 + 1;
            else
                break;
        }
        return (max(L1, L2) + min(R1, R2)) / 2.0;
    }
};

int main(){
    int a[1] = {100000};
    int b[1] = {100001};
    vector<int> nums1, nums2;
//    int size = sizeof(a) / sizeof(int);
//    vector<int> nums3(a, a + size);
//    for(int i = 0; i < nums3.size(); i++){
//        cout << nums3[i] << endl;
//    }
//    vector<int>::iterator it;
//    for(it = nums3.begin(); it != nums3.end(); it++){
//        cout << *it << endl;
//    }
//    for(auto item = nums3.begin(); item != nums3.end(); item++){
//        cout << *item << endl;
//    }
    for(int i = 0; i < 1; i++){
        nums1.push_back(a[i]);
    }
    for(int i = 0; i < 1; i++){
        nums2.push_back(b[i]);
    }
    Solution solution;
    cout << solution.findMedianSortedArrays(nums1, nums2) << endl;
}