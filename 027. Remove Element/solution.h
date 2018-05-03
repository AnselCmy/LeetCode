//
// Created by Chen on 2018/2/6.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto iter = nums.begin();
        while(iter != nums.end()) {
            if(*iter == val) {
                iter = nums.erase(iter);
            }
            else {
                iter++;
            }
        }
        return (int)nums.size();
    }
};

#endif //LEETCODE_SOLUTION_H
