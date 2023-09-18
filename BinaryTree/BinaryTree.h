#include <iostream>
#include <queue>
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

public:

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
                break;
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
                break;
            }
        }
    }

    void PrintLayers()
    {
        queue<Node*> a;
       
            a.push(root->left->left);
       
            a.push(root->left->right);
        
            a.push(root->right->left);
        
            a.push(root->right->right);
    
            a.push(root->left);
        
            a.push(root->right);

            a.push(root);
            while (!a.empty())
            {


                Node* current = a.front();
                a.pop();

                std::cout << current->m_val << " ";
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