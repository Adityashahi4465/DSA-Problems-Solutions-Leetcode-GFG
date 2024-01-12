// https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        queue<int> ans;
        stack<int> st;
        // Make stack of first k elements of queue and pop them
        for(int i{0}; i < k; i++){
            st.push(q.front());
            q.pop();
        }
        // Add stack elements to the ans and pop them
        while(!st.empty()){
            ans.push(st.top());
            st.pop();
        }
        // add queue elements to the ans and pop them
        while(!q.empty()){
            ans.push(q.front());
            q.pop();
        }
        return ans;
    }
