//
// Created by Chen on 2018/2/6.
//
#include "../Catch2/single_include/catch.hpp"
#include "solution.h"

TEST_CASE("Remove Element", "[removeElement]")
{
    Solution s;
    vector<int> v1{1, 1, 2, 3};
    vector<int> v2{2, 3};
    int val1 = 1;
    REQUIRE((s.removeElement(v1, val1) == 2));
    REQUIRE(v1 == v2);

    vector<int> v3{1, 1, 2, 4, 3, 2, 2};
    vector<int> v4{1, 1, 4, 3};
    int val2 = 2;
    REQUIRE((s.removeElement(v3, val2) == 4));
    REQUIRE(v3 == v4);
}
