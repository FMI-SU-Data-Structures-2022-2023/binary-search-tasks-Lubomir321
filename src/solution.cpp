#include "solution.h"

bool isContains(Node* node, int key) {
    if (!node)
        return false;
    if (node->key == key)
        return true;
    if (node->key > key)
        return isContains(node->left, key);
    else
        return isContains(node->right, key);
}

Node* insert(Node* node, int value) {
    Node* newNode = new Node(value);
    if (!node)
        return newNode;
    Node* cur = node;
    Node* prev = cur;
    while (cur->left && cur->right)
    {
        if (cur->key > value)
        {
            cur = cur->left;
        }
        else
            cur = cur->right;
        prev = cur;
    }
    if (prev->key > value)
        prev->left = newNode;
    else
        prev->right = newNode;
    return node;
}

Node* getMax(Node* node) {
    if (!node)
        return nullptr;
    if (!node->right && !node->left)
        return node;
    return getMax(node->right);
}

Node* getMin(Node* node) {
    if (!node)
        return nullptr;
    if (!node->right && !node->left)
        return node;
    return getMin(node->left);

}
Node* remove(Node* node, int key) {
   return nullptr;
}

Node* section(const Node* l, const Node* r) {
    return nullptr;
}

bool areCousins(const Node*, int key1, int key2) {
    return false;
}

int LCA(const Node*, int key1, int key2) {
    return -1;
}
