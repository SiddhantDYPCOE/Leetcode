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
    int traverse(TreeNode* root, int& ans){
        if(root==nullptr) return 0;

        int leftGain = max(0,traverse(root->left, ans));
        int rightGain = max(0,traverse(root->right, ans));

        ans=max(ans, leftGain+root->val+rightGain);
        

        return root->val+max(leftGain,rightGain);
    }
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        traverse(root, ans);
        return ans;
    }
};