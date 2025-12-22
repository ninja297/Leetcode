1class Solution {
2public:
3    vector<int> inorderTraversal(TreeNode* root) {
4        vector<int> ans;
5        stack<TreeNode*> st;
6        TreeNode* curr = root;
7
8        while (curr != NULL || !st.empty()) {
9
10            while (curr != NULL) {
11                st.push(curr);
12                curr = curr->left;
13            }
14            curr = st.top();
15            st.pop();
16            ans.push_back(curr->val);
17            curr = curr->right;
18        }
19
20        return ans;
21    }
22};
23