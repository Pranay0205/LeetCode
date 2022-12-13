/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
     vector<int> node; 
     inorder(root, node);
      return node;  
   }
    
private:
    vector<int> inorder(TreeNode* root, vector<int>& node){
     if(root == nullptr){
       return node;  
     }
        
     inorder(root->left, node);
     node.push_back(root->val);
     inorder(root->right, node);
       
     return node;   
    }
};