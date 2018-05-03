//
// Created by Chen on 2018/2/5.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto iter1 = nums.begin();
        auto iter2 = nums.begin()+1;
        int cnt = 1;
        if(nums.size() == 0) {
            return 0;
        }
        while(iter1 != nums.end() && iter2 != nums.end()) {
            if(*iter1 != *iter2) {
                iter1 = iter2;
                iter2++;
                cnt++;
            }
            else {
                iter2 = nums.erase(iter2);
            }
        }
        return cnt;
    }
};

#endif //LEETCODE_SOLUTION_H
