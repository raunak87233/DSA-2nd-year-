//https://www.hackerrank.com/challenges/tree-level-order-traversal/submissions/code/310358808





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

    void levelOrder(Node * root) {
          queue<Node*> q;
            q.push(root);
            while (!q.empty()) {
                Node* temp = q.front();
                q.pop();
                cout << temp->data << " ";
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
            }

    }

