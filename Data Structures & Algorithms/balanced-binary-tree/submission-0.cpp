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

    int is(TreeNode* root,bool &balance)
    {
        if(root==NULL)
        return 0;

        int lh=is(root->left,balance);
        int rh=is(root->right,balance);

        if(abs(lh-rh)>1)
        balance =0;

        return 1+max(lh,rh);
    }


    bool isBalanced(TreeNode* root) {
        bool balance=1;
        int height=is(root,balance);
        return balance;

        
    }
};
