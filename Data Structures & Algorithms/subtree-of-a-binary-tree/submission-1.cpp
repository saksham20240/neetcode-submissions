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
bool IS(TreeNode* root,TreeNode* subRoot)
{
    if(!root && !subRoot)
    return 1;
    if(!root || !subRoot)
    return 0;
    if(root->val !=subRoot->val)
    return 0;
    return IS(root->left,subRoot->left) &&
    IS(root->right,subRoot->right);
}

void isSub(TreeNode* root,TreeNode* subRoot, int &ans)
{
    if(!root)
    return;
    if(root->val==subRoot->val)
    {
        if(IS(root,subRoot))
        ans=1;
    }
    isSub(root->left,subRoot,ans);
    isSub(root->right,subRoot,ans);
}



class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        int ans=0;
        isSub(root,subRoot,ans);
        return ans;
        
    }
};
