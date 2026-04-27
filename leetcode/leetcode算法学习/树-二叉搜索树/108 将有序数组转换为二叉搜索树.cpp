/**
 * @File Name: 108 将有序数组转换为二叉搜索树
 * @Brief :
 * @Author : hewei (hewei_1996@qq.com)
 * @Version : 1.0
 * @Creat Date : 
 *
 */

#include <iostream>

#include <queue>
#include <stack>
#include <unordered_map>

#include <cmath>

#include <algorithm>

using namespace std;

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode *dfs(vector<int>&numa,int left,int right)
    {
        if(left > right)
            return nullptr;
        int mid = left  + (right - left) / 2;
        TreeNode *root = new TreeNode(numa[mid]);
        root->left = dfs(numa,left,mid - 1);
        root->right = dfs(numa,mid + 1,right);
        return root;

    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return dfs(nums,0,nums.size() - 1);
    }


};