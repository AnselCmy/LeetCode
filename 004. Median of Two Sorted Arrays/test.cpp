//
// Created by Chen on 2018/2/3.
//

#include "../Catch2/single_include/catch.hpp"
#include "solution.h"

TEST_CASE("Median of Two Sorted Arrays", "[findMedianSortedArrays]")
{
    Solution s;
    vector<int> v1{1, 2, 3};
    vector<int> v2{4, 5, 6};
    REQUIRE((s.findMedianSortedArrays(v1, v2) == 3.5));

    vector<int> v3{2, 7, 11, 15};
    vector<int> v4{4, 6, 8, 12};
    // 2 4 6 7 8 11 12 15
    REQUIRE((s.findMedianSortedArrays(v3, v4) == 7.5));

    vector<int> v5{1, 3, 5};
    vector<int> v6{2, 6};
    // 1 2 3 5 6
    REQUIRE((s.findMedianSortedArrays(v5, v6) == 3.0));

    vector<int> v7{1, 3};
    vector<int> v8{2};
    // 1 2 3
    REQUIRE((s.findMedianSortedArrays(v7, v8) == 2.0));
}