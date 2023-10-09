// leetcode : https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/description/
// gfg : https://practice.geeksforgeeks.org/problems/nodes-at-given-distance-in-binary-tree/1

// code for leetcode : 
// Given the root of a binary tree, the value of a target node target, and an integer k, return an array of the values of all nodes that have a distance k from the target node.


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
void markParents(TreeNode* root, unordered_map<TreeNode*, TreeNode*>& parent_track) {
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        TreeNode* current_node = q.front();
        q.pop();
        if (current_node->left) {
            parent_track[current_node->left] = current_node;
            q.push(current_node->left);
        }
        if (current_node->right) {
            parent_track[current_node->right] = current_node;
            q.push(current_node->right);
        }
    }
}

vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
    // return the sorted vector of all nodes at k dist

    // Step 1: get all parent of each node
    unordered_map<TreeNode*, TreeNode*> parent_track;
    markParents(root, parent_track);

    // Step 2: get reference to the target node
    TreeNode* target_node = target;

    queue<TreeNode*> q;
    unordered_map<TreeNode*, bool> visited;
    int current_distance = 0;
    q.push(target_node);
    visited[target_node] = true; // Mark the target node as visited

    // Step 3: Second BFS to go up to k distance from the target node and  using our hashtable info (parent_track)
    while (!q.empty()) {
        int size = q.size();
        if (current_distance == k) break; // got all k distance nodes from target
        current_distance++;

        for (int i = 0; i < size; i++) { // Traverse the whole queue i.e. (up, left, right) to get all nodes
            TreeNode* current = q.front();
            q.pop();

            if (current->left && !visited[current->left]) {
                visited[current->left] = true;
                q.push(current->left);
            }
            if (current->right && !visited[current->right]) {
                visited[current->right] = true;
                q.push(current->right);
            }
            if (parent_track[current] && !visited[parent_track[current]]) {
                visited[parent_track[current]] = true;
                q.push(parent_track[current]);
            }
        }
    }

    vector<int> result;
    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();
        result.push_back(current->val);
    }
    return result;
  }
};


//  Code for GfG Problem sligthly diffrent here we have give value of target node not refrence of that node
//Given a binary tree, a target node in the binary tree, and an integer value k, find all the nodes that are at distance k from the given target node. No parent pointers are available.
//Note: You have to return list in sorted order.



/* A binary Tree node
struct Node
{
    int data;
    struct Node *left, *right;
};
*/
class Solution {
public:
    // Function to get the target node with value 'target' in the binary tree
    Node* getTargetNode(Node* root, int target) {
        if (!root) return nullptr;
        if (root->data == target) return root;

        Node* leftResult = getTargetNode(root->left, target);
        if (leftResult) return leftResult; // Return the result if found in the left subtree

        return getTargetNode(root->right, target); // Return the result from the right subtree (even if it's nullptr)
    }

    // Function to mark parents of nodes using a BFS approach
    void markParents(Node* root, unordered_map<Node*, Node*>& parent_track) {
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            Node* current_node = q.front();
            q.pop();
            if (current_node->left) {
                parent_track[current_node->left] = current_node;
                q.push(current_node->left);
            }
            if (current_node->right) {
                parent_track[current_node->right] = current_node;
                q.push(current_node->right);
            }
        }
    }

    // Function to find nodes at distance 'k' from the target node
    vector<int> KDistanceNodes(Node* root, int target, int k) {
        // Return the sorted vector of all nodes at distance 'k'

        // Step 1: Get all parents of each node
        unordered_map<Node*, Node*> parent_track;
        markParents(root, parent_track);

        // Step 2: Get reference to the target node
        Node* target_node = getTargetNode(root, target);

        queue<Node*> q;
        unordered_map<Node*, bool> visited;
        int current_distance = 0;
        q.push(target_node);
        visited[target_node] = true; // Mark the target node as visited

        // Step 3: Second BFS to go up to distance 'k' from target node using parent information (parent_track)
        while (!q.empty()) {
            int size = q.size();
            if (current_distance == k) break; // Got all nodes at distance 'k' from target
            current_distance++;

            for (int i = 0; i < size; i++) { // Traverse the whole queue (up, left, right) to get all nodes
                Node* current = q.front();
                q.pop();

                if (current->left && !visited[current->left]) {
                    visited[current->left] = true;
                    q.push(current->left);
                }
                if (current->right && !visited[current->right]) {
                    visited[current->right] = true;
                    q.push(current->right);
                }
                if (parent_track[current] && !visited[parent_track[current]]) {
                    visited[parent_track[current]] = true;
                    q.push(parent_track[current]);
                }
            }
        }

        // Collect the nodes found at distance 'k' in a set for uniqueness
       vector<int> result;
        while(!q.empty()){
            Node* current = q.front(); 
            q.pop();
            result.push_back(current->data);
        }
        sort(result.begin(), result.end());
        return result;
    }
};
