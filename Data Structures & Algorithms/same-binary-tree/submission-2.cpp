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

    void is(TreeNode* p, TreeNode* q,bool &flag)
    {
        if(!p&& !q)
        return;
        
        else if((!p &&q) || (p&&!q))
        {
        flag=1;
        return;
        }

        else if(p->val!=q->val)
        {
        flag=1;
        return;
        }

        else
        {
        is(p->left,q->left,flag);
        is(p->right,q->right,flag);
        }

    }


    bool isSameTree(TreeNode* p, TreeNode* q) {

        bool flag=0;
        is(p,q,flag);
        if(flag)
        return false;
        else
        return true;

        
    }
};
