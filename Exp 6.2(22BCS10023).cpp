#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to calculate the maximum depth of the binary tree
int maxDepth(TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    // Recursively find the depth of left and right subtrees and take the maximum
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}

// Function to insert nodes in level order (for testing purposes)
TreeNode* insertLevelOrder(vector<int>& nodes, TreeNode* root, int i) {
    if (i < nodes.size() && nodes[i] != -1) { // Assuming -1 represents null
        root = new TreeNode(nodes[i]);
        root->left = insertLevelOrder(nodes, root->left, 2 * i + 1);
        root->right = insertLevelOrder(nodes, root->right, 2 * i + 2);
    }
    return root;
}

int main() {
    int n;
    cout << "Enter the number of nodes in the binary tree: ";
    cin >> n;

    vector<int> nodes(n);
    cout << "Enter the nodes in level order (use -1 for null): ";
    for (int i = 0; i < n; ++i) {
        cin >> nodes[i];
    }

    TreeNode* root = insertLevelOrder(nodes, nullptr, 0);
    
    int depth = maxDepth(root);
    cout << "Maximum depth of the binary tree: " << depth << endl;

    return 0;
}