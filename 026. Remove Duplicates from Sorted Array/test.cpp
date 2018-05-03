//
// Created by Chen on 2018/2/5.
//

#include "../Catch2/single_include/catch.hpp"
#include "solution.h"

TEST_CASE("Remove Duplicates from Sorted Array", "[removeDuplicates]")
{
    Solution s;
    vector<int> v1{1, 1, 2, 3};
    vector<int> v4{1, 2, 3};
    REQUIRE((s.removeDuplicates(v1) == 3));
    REQUIRE(v1 == v4);

    vector<int> v2{4, 5, 5, 5, 6, 6, 7};
    REQUIRE((s.removeDuplicates(v2) == 4));

    vector<int> v3{4, 5, 6, 6, 6};
    REQUIRE((s.removeDuplicates(v3) == 3));
}
