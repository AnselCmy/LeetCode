//
// Created by Chen on 2018/2/3.
//
#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // 以最小的为标准，用i遍历
        if(nums1 > nums2)
            nums1.swap(nums2);
        int m = (int)nums1.size();
        int n = (int)nums2.size();
        return 1.0;
    }

    double findMedianSortedArrays2(vector<int>& nums1, vector<int>& nums2) {
        // 判断两个vector的长度，以短的为标准搜索
        int length = int(nums1.size() + nums2.size());
        vector<int> longVec;
        vector<int> shortVec;
        if(nums1.size() <= nums2.size()) {
            longVec.swap(nums2);
            shortVec.swap(nums1);
        }
        else {
            longVec.swap(nums1);
            shortVec.swap(nums2);
        }
        // 在long和short的两个vector前后添加MAX和MIN
        longVec.insert(longVec.begin(), INT_MIN);
        longVec.insert(longVec.end(), INT_MAX);
        shortVec.insert(shortVec.begin(), INT_MIN);
        shortVec.insert(shortVec.end(), INT_MAX);
        int shortLeft, shortRight;
        int longLeft, longRight;
        int i, j;
        for(i = 1; i < shortVec.size(); i++) {
            j = length/2 - i + 2;
            shortLeft = shortVec[i-1];
            shortRight = shortVec[i];
            longLeft = longVec[j-1];
            longRight = longVec[j];
            if(shortLeft < longRight && longLeft < shortRight) {
                if(length % 2 == 0) {
                    return (max(shortLeft, longLeft) + min(shortRight, longRight)) / 2.0;
                }
                else {
                    return min(shortRight, longRight)*1.0;
                }
            }
        }
    }

    double findMedianSortedArrays1(vector<int>& nums1, vector<int>& nums2) {
        int length = int(nums1.size() + nums2.size());
        int medianIdx = (int)(length / 2) - 1;
        int cnt = 0;
        vector<int> sortedVec;
        auto iter1 = nums1.begin();
        auto iter2 = nums2.begin();
        while(cnt <= medianIdx+1) {
            if(iter1 != nums1.end() && iter2 == nums2.end()) {
                sortedVec.push_back(*iter1);
                iter1++;
            }
            else if(iter2 != nums2.end() && iter1 == nums1.end()) {
                sortedVec.push_back(*iter2);
                iter2++;
            }
            else if(*iter1 < *iter2) {
                sortedVec.push_back(*iter1);
                iter1++;
            }
            else if(*iter2 < *iter1) {
                sortedVec.push_back(*iter2);
                iter2++;
            }
            cnt++;
        }
        if(length % 2 == 1) {
            return *(sortedVec.end()-1) * 1.0;
        }
        else {
            int a = *(sortedVec.end()-1);
            int b = *(sortedVec.end()-2);
            return (a + b)/2.0;
        }
    }
};

#endif //LEETCODE_SOLUTION_H
