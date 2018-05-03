//
// Created by Chen on 2018/2/3.
//
#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> rst;
        unordered_map<int, int> map;
        for(int i=0; i<nums.size(); i++)
        {
            int complement = target - nums[i];
            if(map.find(complement) != map.end())
            {
                rst.push_back(map.at(complement));
                rst.push_back(i);
            }
            else
            {
                map.insert(make_pair(nums[i], i));
            }
        }
        return rst;
    }
};

#endif //LEETCODE_SOLUTION_H
