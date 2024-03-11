// https://www.geeksforgeeks.org/problems/count-pairs-sum-in-matrices4332/1

bool check(vector<vector<int >> &mat2,int x,int num){
	    int i=0,j=mat2.size()-1;
	    int key=x-num;
	    while(i>=0&&i<mat2.size()&&j>=0&&j<mat2.size()){
	        if(mat2[i][j]==key){
	            return 1;
	        }
	        else if(mat2[i][j]>key)j--;
	        else if(mat2[i][j]<key)i++;
	        //else if(mat2[i][j]!=key) return 0;
	    }  
	    return 0;
	}
	
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    int pair=0;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            bool r=check(mat2,x,mat1[i][j]);
	            if(r)pair++;
	        }
	    }
	    return pair;
	}
