//
// Created by Chen on 2018/5/3.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <stack>

using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    vector<int> inorderTraversal2(TreeNode* root) {
        vector<int> rst;
        recursive(root, rst);
        return rst;
    }

    void recursive(TreeNode* root, vector<int>& rst) {
        if(root) {
            recursive(root->left, rst);
            rst.push_back(root->val);
            recursive(root->right, rst);
        }
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> rst;
        stack<TreeNode*> s;
        TreeNode* curr = root;
        while(curr != NULL || !s.empty()) {
            while(curr) {
                s.push(curr);
                curr = curr->left;
            }
            curr = s.top();
            s.pop();
            rst.push_back(curr->val);
            curr = curr->right;
        }
        return rst;
    }
};

#endif //LEETCODE_SOLUTION_H
