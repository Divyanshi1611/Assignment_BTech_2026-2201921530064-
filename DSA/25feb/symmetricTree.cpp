//https://leetcode.com/problems/symmetric-tree/
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
        bool isSymmetric(TreeNode* root) {
            if(root==NULL) return true;
            return traversal(root->left,root->right);
            
            
        }
        bool traversal(TreeNode* l,TreeNode* r){
            if(l==NULL && r==NULL) return true;
            if(l==NULL || r==NULL) return false;
            if(l->val!=r->val) return false;
            if(!traversal(l->left,r->right)) return false;
            if(!traversal(l->right,r->left)) return false;
            return true;
        }
    };