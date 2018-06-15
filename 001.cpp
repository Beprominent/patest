#include <iostream>
#include <vector>
#include <map>
using namespace std;
//class Solution{
//public:
//    vector<int> twoSum(vector<int>& data, int target) {
//        vector<int> index;
//        for (int i = 0; i < data.size(); ++i) {
//            for (int j = i + 1; j < data.size(); ++j) {
//                if(data.at(i) + data.at(j) == target){
//                    index.push_back(i);
//                    index.push_back(j);
//                    return index;
//                }
//            }
//        }
//        return index;
//    }
//};

class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target){
        map<int, int> m;
        for(int i = 0; i < nums.size(); i++){
            if(m.count(target - nums[i])) {
                return {i, m[target- nums[i]]};
            }
            m[nums[i]] = i;
        }
        return {};
    }
};