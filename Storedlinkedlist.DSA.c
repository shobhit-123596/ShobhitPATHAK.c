#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct ListNode {
    int data;
    struct ListNode* next;
};

struct TreeNode* newTreeNode(int data) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}
struct ListNode* newListNode(int data) {
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->data = data;
    node->next = NULL;
    return node;
}

struct ListNode* head = NULL;
struct ListNode* tail = NULL;

void bstToList(struct TreeNode* root) {
    if (root == NULL) return;

    bstToList(root->left); 

    struct ListNode* newNode = newListNode(root->data);
    if (head == NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }

    bstToList(root->right); 
}

void printList(struct ListNode* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    // Creating BST:
    //       4
    //      / \
    //     2   6
    //    / \   \
    //   1   3   7
    struct TreeNode* root = newTreeNode(4);
    root->left = newTreeNode(2);
    root->right = newTreeNode(6);
    root->left->left = newTreeNode(1);
    root->left->right = newTreeNode(3);
    root->right->right = newTreeNode(7);

    bstToList(root);
    printf("Sorted Linked List:\n");
    printList(head);
    return 0;
}
