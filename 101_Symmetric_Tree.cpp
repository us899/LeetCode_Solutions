



class Solution {
    bool check(TreeNode* t1, TreeNode* t2) {
        if (!t1 && !t2)
            return true;
        
        if (!t1 || !t2)
            return false;
        
        return (t1 -> val == t2 -> val)
            && check(t1 -> left, t2 -> right)
            && check(t1 -> right, t2 -> left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        return check(root, root);
    }
};



