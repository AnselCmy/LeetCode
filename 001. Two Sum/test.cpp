//
// Created by Chen on 2018/2/3.
//

#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch.hpp"
#include "solution.h"

TEST_CASE("Two Sum", "[twoSum]")
{
    Solution s;

    vector<int> v1{2, 7, 11, 15};
    REQUIRE( (s.twoSum(v1, 9) == std::vector<int>{0, 1}) );

    vector<int> v2{0, 4, 3, 0};
    REQUIRE( (s.twoSum(v2, 0) == std::vector<int>{0, 3}) );

    vector<int> v3{-3, 4, 3, 90};
    REQUIRE( (s.twoSum(v3, 0) == std::vector<int>{0, 2}) );
}

