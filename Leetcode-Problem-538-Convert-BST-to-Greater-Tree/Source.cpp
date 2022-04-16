//						Problem 538
// https://leetcode.com/problems/convert-bst-to-greater-tree/

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
	int cum = 0; //haha
	TreeNode* convertBST(TreeNode* root) {
		if (root != nullptr)
		{
			convertBST(root->right);
			cum += root->val;
			root->val = cum;
			convertBST(root->left);
		}
		return root;
	}
};

int main()
{
	return 0;
}