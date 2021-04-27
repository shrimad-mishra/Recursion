#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct Node
    {
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

int maxsum(Node* root, int& res) 
{
    if (root == NULL)
        return 0;
    int lh, rh, temp, ans;
    lh = maxsum(root->left, res); //left half recursive call
    rh = maxsum(root->right, res); //right half recursive call
    temp = max(root->data, max(lh, rh) + root->data); // temp sum
    ans = max(temp, lh + rh + root->data);
    res = max(res, ans);
    return temp; //return temp sum
}

int maxsumutility(Node* root) // utility function to give max sum
{
    int res = INT_MIN; //initialise res as minimum value
    maxsum(root, res);
    return res;
}

int main()
{
    Node* root = new Node(10);
    root->left = new Node(12);
    root->right = new Node(-6);
    root->left->left = new Node(14);
    root->left->right = new Node(25);
    root->right->left = new Node(-9);
    root->right->right = new Node(15);
    root->left->left->left = new Node(-2);
    root->left->left->right = new Node(3);

    cout << "Maximum sum: ";
    int finalres = maxsumutility(root);
    cout << finalres << "\n";
    return 0;
}
