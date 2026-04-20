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

    bool inOrder(TreeNode *root, int sum, int targetSum)
    {
        if(!root)
        return false;

        sum+=root->val;
        if(!root->left&&!root->right)
        {
           if(sum==targetSum)
           return true;

           return false;
        } 
       

        bool leftside=inOrder(root->left, sum, targetSum);
        bool rightside=inOrder(root->right, sum, targetSum);

        return leftside || rightside;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        
       int sum=0;

       bool result= inOrder(root, sum, targetSum);

       return result;
    }
};