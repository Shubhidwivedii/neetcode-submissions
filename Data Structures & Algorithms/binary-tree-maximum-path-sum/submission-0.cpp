/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int balance(TreeNode* root,int &sum){
        if(root==nullptr) return 0;
        int left=max(0,balance(root->left,sum));
        int right=max(0,balance(root->right,sum));
        sum=max(sum,left+right+root->val);
        return root->val+max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        int sum=INT_MIN;
        balance(root,sum);
        return sum;

    }
};
