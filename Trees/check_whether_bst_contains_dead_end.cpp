// https://www.geeksforgeeks.org/problems/check-whether-bst-contains-dead-end/1

unordered_map<int,int> hash;
    bool isDeadEnd(Node *root)
    {
        if(root == NULL) return false;
        if(root->left == NULL && root->right == NULL){
                if(root->data == 1) return true;
                if(hash.count(root->data-1) && hash.count(root->data+1)) 
                    return true;
        }else{
            hash[root->data] = 1;
            return isDeadEnd(root->left) || isDeadEnd(root->right);
        }
        
    }
