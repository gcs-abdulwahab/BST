#include <iostream>
#include "BST.cpp"
using namespace std;


int main() {
        BST b;
//    b.add(8);
//    b.add(9);
//    b.add(5);
        b.insert(8);
        b.insert(9);
        b.insert(5);
        b.insert(3);
        b.insert(1);
        b.insert(2);
        b.insert(7);
        b.insert(4);
        //b.print();
       // b.deleteNode(9);
        b.print();
        cout<<endl;
//        cout<< b.root->getData();
        cout<< b.getLeftMost(b.root->right)->getData();

//    return 0;
}
