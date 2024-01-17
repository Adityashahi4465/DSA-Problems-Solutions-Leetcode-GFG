// https://www.geeksforgeeks.org/problems/all-unique-permutations-of-an-array/1

void solve(vector<int> &nums, int ind, int n, set<vector<int>> &s) {
        if(ind == n) {
            s.insert(nums);
            return;
        }
        
        for(int i = ind; i < n; i++) {
            swap(nums[ind], nums[i]);
            solve(nums, ind + 1, n, s);
            swap(nums[ind], nums[i]);
        }
    }

    vector<vector<int>> uniquePerms(vector<int> &arr, int n) {
        vector<vector<int>> res;
        set<vector<int>> s;
        solve(arr, 0, n, s);
        
        for(auto i: s)
            res.push_back(i);
        
        return res;
    }
