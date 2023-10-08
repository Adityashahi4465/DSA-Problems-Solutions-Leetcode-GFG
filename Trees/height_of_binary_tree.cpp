/*
Base Case:
- It checks if the node is NULL, which indicates an empty tree. In this case, it returns 0, as the height of an empty tree is 0.

Recursive Case:
- If the node is not NULL, it makes two recursive calls to height for its left and right children, respectively.
- leftHeight stores the height of the left subtree.
- rightHeight stores the height of the right subtree.
- Finally, it returns the maximum height between leftHeight and rightHeight, plus 1 to account for the current node. This represents the height of the binary tree rooted at the current node.
*/

class Solution{
    public:
    //Function to find the height of a binary tree.
   int height(struct Node* node){
        // code here 
        if(!node) return 0;
        return max(height(node->left) + 1 , height(node->right) + 1);
    }
};

//    OR

class Solution {
public:
    // Function to find the height of a binary tree.
    int height(struct Node* node) {
        if (!node)
            return 0; // Base case: If the node is NULL (empty tree), return 0.

        // Recursive case: Calculate the height of the left and right subtrees.
        int leftHeight = height(node->left);
        int rightHeight = height(node->right);

        // Return the maximum height of the left and right subtrees, plus 1 for the current node.
        return (max(leftHeight, rightHeight) + 1);
    }
};
