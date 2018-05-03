//
// Created by Chen on 2018/5/3.
//

#include "../Catch2/single_include/catch.hpp"
#include "solution.h"

TEST_CASE("Binary Tree Inorder Traversal", "[InorderTraversal]")
{
    Solution s;
    TreeNode root(1);
    TreeNode left1(3);
    TreeNode right1(2);
    root.left = &left1;
    root.right = &right1;
    vector<int> v1{3, 1, 2};

    vector<int> v2 = s.inorderTraversal(&root);
    REQUIRE(v1 == v2);

    vector<int> v3 = s.inorderTraversal(nullptr);
    vector<int> v4{};
    REQUIRE(v3 == v4);
}