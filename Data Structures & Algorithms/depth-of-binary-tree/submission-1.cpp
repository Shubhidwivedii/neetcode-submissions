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
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        stack<pair<TreeNode*,int>>st;
        int count=0;
        st.push({root,1});
        while(!st.empty()){
            auto it=st.top();
            st.pop();
            count=max(count,it.second);
            if(it.first->left!=NULL){
                st.push({it.first->left,it.second+1});
            }
            if(it.first->right!=NULL){
                st.push({it.first->right,it.second+1});
            }
        }
        return count;

        
    }
};
