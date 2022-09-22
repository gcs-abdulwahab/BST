#include <iostream>

using namespace std;
class Node {
    int data ;
public:
    int getData() const {
        return data;
    }

    void setData(int data) {
        Node::data = data;
    }

    Node *getLeft() const {
        return left;
    }

    void setLeft(Node *left) {
        Node::left = left;
    }

    Node *getRight() const {
        return right;
    }

    void setRight(Node *right) {
        Node::right = right;
    }


public:
    Node * left;
    Node * right;

    Node(int data){
        this->data = data ;
        left = right = nullptr;
    }
};

class BST {
public : Node * root;

    bool  isEmpty(){
        return root== nullptr;
    }

    void add(int x , Node * & root){

        if (root == nullptr)
        {
            root = new  Node(x);
        }
        else
        {
            if (x <= root->getData() )
            {
                add(x , root->left );
            }
            else
            {
                 add(x, root->right );
            }

        }
    }



    BST(){
        root = nullptr;
    }

    void add (int x){
        add(x, root);
    }
    void insert (Node * root , int x){

        if (isEmpty())
        {
            this->root = new Node(x);
        }
        else
        {
            if (x <= root->getData() )
            {
                if (root->left != nullptr ) {
                    root = root->left;
                    insert(root,x);
                }
                else{
                    root->left = new Node(x);
                }
            }
            else{
                if (root->right != nullptr ) {
                    root = root->right;
                    insert(root,x);
                }
                else{
                    root->right = new Node(x);
                }
            }
        }

    }
    void insert ( int x ){
        insert (root ,  x);
    }

    void deleteNode(int x ){
        deleteNode(root,x);
    }
    void deleteNode(Node *root, int x){
        if (!isEmpty()){

            cout<<  getSuccessor(root)->getData();


        }
    }
    Node* getSuccessor(Node *root ){
        // Lowest Element in the right Subtree
            return getLeftMost(root->right);
    }
    Node* getLeftMost(Node * root){
        if (!isEmpty()){
            while(root->left != nullptr)
                root = root->left;
        }
        return root;
    }



    void print(){
        print(root);
    }

    void print(Node * root){
        if (root == nullptr)
            return ;
        print(root->getLeft());
        cout << root->getData() <<"  ";
        print(root->getRight());

    }


};