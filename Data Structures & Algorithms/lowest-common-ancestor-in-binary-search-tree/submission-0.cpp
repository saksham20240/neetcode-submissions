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

    TreeNode* lca(TreeNode* root, TreeNode* p,TreeNode* q)
    {
        if(! root)
        return NULL;


        else if(root->val>p->val && root->val>q->val)
        {
            return lca(root->left,p,q);
        }
        else if(root->val<p->val && root->val<q->val)
        {
            return lca(root->right,p,q);
        }
        else
        {
            return root;
        }

    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return lca(root,p,q);
        
        
    }
};
