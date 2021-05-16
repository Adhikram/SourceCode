TreeNode* bstFRI(vector<int>nums){
    if(!nums.size())return NULL;
    
    vector<TreeNode*>data;
    for(auto x:nums){
        data.push_back(new TreeNode(x));
    }
    for(int i=0;i<nums.size();i++){
        data[i]->left=(2*i+1 >nums.size())?NULL:data[2*i +1];
        data[i]->right=(2*i+2 >nums.size())?NULL:data[2*i +2];
    }
    return root;
}