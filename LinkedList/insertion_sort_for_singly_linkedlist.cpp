// https://www.geeksforgeeks.org/problems/insertion-sort-for-singly-linked-list/1
    Node* insertionSort(struct Node* head)
    {
        vector<int> ans;

        Node *temp = head;

        while(temp != NULL){

            ans.push_back(temp -> data);

            temp = temp -> next;

        }

        sort(ans.begin(), ans.end());

        temp = head;

        for(int i = 0; i < ans.size(); i++){

            temp -> data = ans[i];

            temp = temp -> next;

        }

        return head;  
    }🤣
