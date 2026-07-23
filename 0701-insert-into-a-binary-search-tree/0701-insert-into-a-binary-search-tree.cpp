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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==nullptr) return new TreeNode(val);
        TreeNode* dummy= root;
        while(true){
            if(dummy->val < val){
                if(dummy->right != nullptr){
                    dummy=dummy->right;
                }else{
                    dummy->right= new TreeNode(val);
                    break;
                }
            }else{
                if(dummy->left != nullptr){
                    dummy=dummy->left;
                }else{
                    dummy->left= new TreeNode(val);
                    break;
                }
            }
        }
        return root;
    }
};