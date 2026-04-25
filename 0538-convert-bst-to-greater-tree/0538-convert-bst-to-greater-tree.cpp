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

    void inorder(TreeNode *root, vector<int>& ans, int &index)
    {
        if (!root) return;

        inorder(root->right, ans, index);

        if (index == 0)
            ans.push_back(root->val);
        else
            ans.push_back(root->val + ans[index - 1]);

        index++;

        inorder(root->left, ans, index);
    }

   void myinorder(TreeNode *root, vector<int>& ans, int &index)
    {
        if (!root) return;

        // FIX: use reverse inorder here also
        myinorder(root->right, ans, index);

        root->val = ans[index++];

        myinorder(root->left, ans, index);
    }
    TreeNode* convertBST(TreeNode* root) {
        
        int index=0;
        vector<int>ans;
        inorder(root, ans ,index);
        
        index=0;
        myinorder(root, ans,index);

        return root;
    }
};