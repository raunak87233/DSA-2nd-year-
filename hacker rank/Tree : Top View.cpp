//https://www.hackerrank.com/challenges/tree-top-view/problem?isFullScreen=true



#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/


//function


 
    void topView(Node * root) {
    if(root == NULL) return;
    map<int, int> m;
    queue<pair<Node*, int>> q;
    q.push(make_pair(root, 0));
    while(!q.empty()) {
        pair<Node*, int> p = q.front();
        q.pop();
        int hd = p.second;
        Node* node = p.first;
        if(m.count(hd) == 0) {
            m[hd] = node->data;
            cout << node->data << " ";
        }
        if(node->left != NULL) q.push(make_pair(node->left, hd - 1));
        if(node->right != NULL) q.push(make_pair(node->right, hd + 1));
    }
}

}; //End of Solution

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
	myTree.topView(root);
    return 0;
}
