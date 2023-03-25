#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

vector<TreeNode *> solve(int start, int end){
    vector<TreeNode *> ans;
    if (start > end)
        return {NULL};
    if (start == end)
        return {new TreeNode(start)};
    for (int i = start; i <= end; i++)
    {
        vector<TreeNode *> left = solve(start, i - 1);
        vector<TreeNode *> right = solve(i + 1, end);
        for (auto l : left)
            for (auto r : right)
                ans.push_back(new TreeNode(i, l, r));
    }
    return ans;
}

vector<TreeNode *> uniqueBST(int n){
    vector<TreeNode *> ans = solve(1, n);
    return ans;
}
int main(){

    return 0;
}