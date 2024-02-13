// https://www.geeksforgeeks.org/problems/clone-graph/1

Node* help(Node* node,vector<Node*>& visited)
    {
        Node* graph=new Node(node->val);
        visited[node->val]=graph;
        for(auto it:node->neighbors)
        {
            if(!visited[it->val])
            help(it,visited);
            
            graph->neighbors.push_back(visited[it->val]);
        }
        return graph;
    }
    Node* cloneGraph(Node* node) {
        vector<Node*> visited(10001,NULL);
        return help(node,visited);
    }
