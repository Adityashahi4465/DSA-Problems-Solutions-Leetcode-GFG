// https://www.geeksforgeeks.org/problems/consecutive-1s-not-allowed1912/1

// #define ll long long
	ll countStrings(int n) {
	    ll mod = 1e9+7;
	   // ending_with_zero and ending_with_one, for a particular i, how many strings are there to end with 0 and 1
	    ll ending_with_one=1, ending_with_zero=1;
	    for(int i=2; i<=n; ++i){
	        ll temp = ending_with_zero;
	       // zero can be added to both the strings which end with 0 or 1
	        ending_with_zero = (ending_with_zero + ending_with_one)%mod;
	       // 1 can only be added to string which end with 0 only
	        ending_with_one = temp;
	        
	    }
	    return (ending_with_one + ending_with_zero)%mod;
	}
