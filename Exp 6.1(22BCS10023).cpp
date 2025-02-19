#include <iostream>
#include <vector>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to convert sorted array to height-balanced BST
TreeNode* sortedArrayToBST(vector<int>& nums, int left, int right) {
    if (left > right) {
        return NULL;
    }

    // Choose the middle element as the root
    int mid = left + (right - left) / 2;
    TreeNode* root = new TreeNode(nums[mid]);

    // Recursively build the left and right subtrees
    root->left = sortedArrayToBST(nums, left, mid - 1);
    root->right = sortedArrayToBST(nums, mid + 1, right);

    return root;
}

// Helper function to initiate the conversion
TreeNode* sortedArrayToBST(vector<int>& nums) {
    return sortedArrayToBST(nums, 0, nums.size() - 1);
}

// Function to print the tree in pre-order (for testing purposes)
void preOrder(TreeNode* root) {
    if (root == NULL) {
        return;
    }
    cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main() {
    int n;
    cout << "Enter the number of elements in the sorted array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the sorted elements (in ascending order): ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    TreeNode* root = sortedArrayToBST(nums);
    
    cout << "Pre-order traversal of the constructed BST: ";
    preOrder(root);
    cout << endl;

    return 0;
}