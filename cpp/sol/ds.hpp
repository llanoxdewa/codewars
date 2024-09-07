struct TreeNode {
   int val;
   TreeNode *left;
   TreeNode *right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

struct ListNode {
   int val;
   ListNode *next;
   ListNode() : val(0), next(nullptr) {}
   ListNode(int x) : val(x), next(nullptr) {}
   ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution;

void print_linked_list(ListNode* head){
  ListNode* walk = head;
  while(walk){
    cout << walk->val << ' ';
    walk = walk->next;
  }
  cout << '\n';
}

// preorder 
void print_tree(TreeNode* root){
  if(!root) return;  
  cout << root->val << ' ';
  print_tree(root->left);
  print_tree(root->right);
}


