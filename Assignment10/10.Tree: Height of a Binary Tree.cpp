//https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/submissions/code/310011714





/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        // Write your code here.
        if (root == NULL) 
        return -1;
    else {
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        if (leftHeight > rightHeight) 
            return(leftHeight + 1); 
        else return(rightHeight + 1); 
    }
    }

