/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        if (root==NULL)
        {
            return this->output;
        }
        vector<Node*> temp=root->children;
        
        
        for(auto cur : temp)
        {
            
            this->postorder(cur);
            //cout<<cur->val<<endl;
            //this->output.push_back(cur->val);
        }
        
        this->output.push_back(root->val); 
        return this->output;
    }
private:
    vector<int> output;
    
};
