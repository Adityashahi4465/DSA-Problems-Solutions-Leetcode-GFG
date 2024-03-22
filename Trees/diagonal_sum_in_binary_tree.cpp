// https://www.geeksforgeeks.org/problems/diagonal-sum-in-binary-tree/1

void leftmost(Node*root,int pos,int &left){
      if(!root)return;
      left=min(left,pos);
      leftmost(root->left,pos-1,left);
      leftmost(root->right,pos,left);
  }
  void sum(Node*root,int pos,vector<int>&ans){
      if(!root)return;
      ans[pos]+=root->data;
      sum(root->right,pos,ans);
      sum(root->left,pos-1,ans);
  }
    vector<int> diagonalSum(Node* root) {
        int left=0;
        leftmost(root,0,left);
        vector<int>ans(abs(left)+1,0);
        sum(root,abs(left),ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }

