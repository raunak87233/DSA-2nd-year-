//https://www.hackerrank.com/challenges/self-balancing-tree/problem



/* Node is defined as :
typedef struct node
{
    int val;
    struct node* left;
    struct node* right;
    int ht;
} node; */
int height(node* root){
    
    if(root==NULL)
        return 0;
    
    int lh,rh;
    if(root->left!=NULL)
        lh=1+root->left->ht;
    else
        lh=0;
    
    if(root->right!=NULL)
        rh=1+root->right->ht;
    else
        rh=0;
    
    if(lh>rh)
        return lh;
    else
        return rh; 
}


int balance_factor(node* root){
    
    if(root==NULL)
        return 0;
    int lh,rh;
    
    if(root->left==NULL)
        lh=0;
    else
        lh=1+root->left->ht;
    
    if(root->right==NULL)
        rh=0;
    else
        rh=1+root->right->ht;
    
    return lh-rh;
    
    
}

node* createnode(int val){
    
    node* temp=(node* )malloc(sizeof(node));
    temp->val=val;
    temp->left=NULL;
    temp->right=NULL;
    temp->ht=0;
    
    return temp;
}
node* rotateright(node* x){
    node* t;
    
    t=x->left;
    x->left=t->right;
    t->right=x;
    
    x->ht=height(x);
    t->ht=height(t);
    
    return t;
    
}

node* rotateleft(node* x){
    node* t;
    
    t=x->right;
    x->right=t->left;
    t->left=x;
    
    x->ht=height(x);
    t->ht=height(t);
    
    return t;
    
    
}

node* LL(node* x){
    x=rotateright(x);
    
    return x;
}

node* RR(node* x ){
    
    x=rotateleft(x);
    return x;
}

node* RL(node* x){
    
    x->right=rotateright(x->right);
    x=rotateleft(x);
    
    return x;
}

node* LR(node* x){
    
    x->left=rotateleft(x->left);
    x=rotateright(x);
    
    return x;
}



node * insert(node* root,int val)
{   
    if(root==NULL)
        root=createnode(val);
    
    else{
        
        if(val<root->val){ 
            root->left=insert(root->left,val);
            
            if(balance_factor(root)==2){
                if(val<root->left->val)
                    root=LL(root);
                else
                    root=LR(root);
            }
        }
        
        else if(val>root->val){ 
            root->right=insert(root->right,val);
            
            if(balance_factor(root)==-2){
                if(val>root->right->val)
                    root=RR(root);
                else
                    root=RL(root);
            }
        }
        
        
        
    }
    
    root->ht=height(root);
    
    return root;
    
    
  
}
