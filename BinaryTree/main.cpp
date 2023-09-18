#include <iostream>
#include "BinaryTree.h"
int main() {
    BinaryTree first;
    first.init();

    cout << "Layer by Layer Traversal:" << endl;
    first.PrintLayers();
    cout << endl;

    cout << "Preorder Traversal:" << endl;
    first.PrintPreOrder();
    cout << endl;

    cout << "Inorder Traversal:" << endl;
    first.PrintInOrder();
    cout << endl;

    cout << "Postorder Traversal:" << endl;
    first.PrintPostOrder();
    cout << endl;

    return 0;
}