/*
Binary trees have hierarchial structure
every item can have atmost 2 items in it, thats why it's binary
starting point is called the root, the next items are called children
the item that doesn't have any other item in kitb is called leaf node
the node and the items below it are altogether a sub-tree
ancestors

*******see excalidraw

*full binary tree- every node has either 0 or two children
*complete binary tree- all levels are completely filled except the last level, the last level has all the n nodes on as left as possible
*perfect bt- all leaf nodes are at the same level
*balanced bt- height of tree is maximum log(N) in base 2, N is nodes
*degenerate tree- every node has only 1 child

**** Binary representation in C++ *********
see excalidraw



*/

//******code in c++

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val) // initialising using constructor
    {
        data=val;
        //left=right=null;
    }
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    struct Node* root= new Node(1);
    root -> left= new Node(2);
    root -> right= new Node(3);
    root -> left-> right = new Node(5);
    return 0;
}

/*
******* TRaversal techniques(BFS/DFS)

****** Depth first search techniques(DFS)
1) Inorder traversal(left root right)
    for a)     1          b)        1  
           2        3           2        3
         4   5    6   7      4    5    6    7
                                 8         9  10


    take the left subtree in "left root right" order then again root then right right sub-tree with same "left root right" order
    a)4 2 5 1 6 3 7
    b)4 2 8 5 1 6 3 9 7 10
2) Pre-order traversal(root left right)
    a)1 2 4 5 3 6 7

3) Post-order traversal(left right root)
    a)4 5 2 6 7 3 1

*/