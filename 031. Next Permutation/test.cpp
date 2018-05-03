//
// Created by Chen on 2018/2/7.
//
#include "../Catch2/single_include/catch.hpp"
#include "solution.h"

TEST_CASE("Next Permutation", "[nextPermutation]")
{
    Solution s;
    vector<int> v1{1, 2, 3};
    vector<int> v2{1, 3, 2};
    s.nextPermutation(v1);
    REQUIRE(v1 == v2);

    vector<int> v3{1, 4, 3, 2};
    vector<int> v4{2, 1, 3, 4};
    s.nextPermutation(v3);
    REQUIRE(v3 == v4);
}
