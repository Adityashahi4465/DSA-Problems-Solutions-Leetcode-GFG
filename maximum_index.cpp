
// https://www.geeksforgeeks.org/problems/maximum-index-1587115620/1
    int maxIndexDiff(int a[], int n) 
    { 
        // Your code here
        vector<pair<int,int>> pa;
        for(int i=0; i<n; i++){
            pa.push_back({a[i],i});
        }
        sort(pa.begin(),pa.end());
        vector<int> suf(n,pa[n-1].second);
        int maxi=0;
        for(int i=n-2; i>=0; i--){
            int r=pa[i].second;
            suf[i]=max(suf[i+1],r);
            maxi=max(maxi,suf[i]-r);
        }
        return maxi;
    }
