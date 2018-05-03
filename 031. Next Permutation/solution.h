//
// Created by Chen on 2018/2/7.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        auto iter = nums.begin();
        auto len = (int)nums.size();
        auto temp = nums.begin();
        for(iter = nums.begin(); iter!=nums.end(); iter++) {
            if(*iter > *(iter+1) || iter == nums.end()-1) {
                // 那么把iter到数列最后都移到iter-1前面
                temp = iter-2;
                nums.insert(iter-1, iter, nums.end());
                nums.erase(nums.begin()+len, nums.end());
//                sort(temp+2, nums.end());
                break;
            }
        }
    }
};

#endif //LEETCODE_SOLUTION_H
