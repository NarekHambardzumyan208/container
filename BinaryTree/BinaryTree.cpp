#include <iostream>
#include <cstdlib> // For rand()

using namespace std;

struct Node {
    Node* left = nullptr;
    Node* right = nullptr;
    int m_val = 0;
    Node(int m_val) : m_val(m_val) {}
};

class BinaryTree {
private:
    Node* root = nullptr;

    void PreOrder(Node* node) {
        if (node == nullptr) {
            return;
        }
        cout << node->m_val << " ";
        PreOrder(node->left);
        PreOrder(node->right);
    }

    void PostOrder(Node* node) {
        if (node == nullptr) {
            return;
        }
        PostOrder(node->left);
        PostOrder(node->right);
        cout << node->m_val << " ";
    }

    void InOrder(Node* node) {
        if (node == nullptr) {
            return;
        }
        InOrder(node->left);
        cout << node->m_val << " ";
        InOrder(node->right);
    }

    void printCurrentLevel(Node* root, int level) {
        if (root == nullptr)
            return;
        if (level == 1)
            cout << root->m_val << " ";
        else if (level > 1) {
            printCurrentLevel(root->left, level - 1);
            printCurrentLevel(root->right, level - 1);
        }
    }

public:
    int height(Node* node) {
        if (node == nullptr)
            return 0;
        else {
            int lheight = height(node->left);
            int rheight = height(node->right);
            return (lheight > rheight) ? (lheight + 1) : (rheight + 1);
        }
    }

    void init() {
        root = new Node(rand() % 10);
        int i = 0;
        Node* temprt = root;
        while (i < 3) {
            ++i;
            temprt->left = new Node(rand() % 10);
            temprt = temprt->left;
            if (i == 2) {
                i = 0;
                root->left->right = new Node(rand() % 10);
            }
        }
        i = 0;
        temprt = root;
        while (i < 3) {
            ++i;
            temprt->right = new Node(rand() % 10);
            temprt = temprt->right;
            if (i == 2) {
                i = 0;
                root->right->left = new Node(rand() % 10);
            }
        }
    }

    void printLevelOrder() {
        int h = height(root);
        for (int i = 1; i <= h; i++) {
            printCurrentLevel(root, i);
        }
    }

    void PrintPreOrder() {
        PreOrder(root);
    }

    void PrintInOrder() {
        InOrder(root);
    }

    void PrintPostOrder() {
        PostOrder(root);
    }
};

int main() {
    BinaryTree first;
    first.init();

    cout << "Level Order Traversal:" << endl;
    first.printLevelOrder();
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
