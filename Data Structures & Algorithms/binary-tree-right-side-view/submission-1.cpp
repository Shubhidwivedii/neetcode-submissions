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
    vector<int> rightSideView(TreeNode* root) {
        if(root==nullptr) return {};
        map<int,int>nodes;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            TreeNode* temp=p.first;
            int x=p.second;
            nodes[x]=temp->val;
            if(temp->left) q.push({temp->left,x+1});
            if(temp->right) q.push({temp->right,x+1});
        }
        vector<int>ans;
        for( auto p:nodes){
            ans.push_back(p.second);
        }
        return ans;
        
    }
};
