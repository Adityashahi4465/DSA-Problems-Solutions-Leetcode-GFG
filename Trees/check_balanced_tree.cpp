// GFG : https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1  
// Given a binary tree, find if it is height balanced or not. 
// A tree is height balanced if difference between heights of left and right subtrees is not more than one for all nodes of tree. 


struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
  int check(Node *root)
    {
        if(root==NULL)
        return 0;
        
        int left=check(root->left);
        int right=check(root->right);
        
        if(left==-1 || right==-1)
        return -1;
        
        else if(abs(left-right)>1)
        return -1;
        
        return 1+max(left,right);
    }
    
    
    bool isBalanced(Node *root)
    {
        //  Your Code here
        int k=check(root);
        if(k==-1)
        return false;
        else
        return true;
    }
};
