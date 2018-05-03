#include <iostream>
#include <vector>
#include "094. Binary Tree Inorder Traversal/solution.h"

using namespace std;

int main()
{
    Solution s;
    TreeNode root(1);
    TreeNode left1(3);
    TreeNode right1(2);
    root.left = &left1;
    root.right = &right1;
    vector<int> v1{1, 3, 2};

    vector<int> v2 = s.inorderTraversal(&root);
    return 0;
}