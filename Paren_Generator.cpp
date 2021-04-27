#include <bits/stdc++.h>
using namespace std;

void traverse(int open, int close, int n, int& count, string str, vector<string>& v)
{
    if (close == n) {
        v.push_back(str);
        return;
    }
    if (open < n) {
        traverse(open + 1, close, n, count, str + "(", v);
    }
    if (close < open) {
        traverse(open, close + 1, n, count, str + ")", v);
    }
    return;
}

void genarate_parenthesis(int num)
{
    string str = "";
    int open_brace = 0, close_brace = 0, count = 0;
    vector<string> v;
    traverse(open_brace, close_brace, num, count, str, v);
    cout << "Posiible combination : ";
    for (int i = 0; i < v.size(); i++) 
    {
        cout << v[i] << endl;
    }
}

int main()
{
    int num;

    cout << "Enter the number: ";
    cin >> num;

    genarate_parenthesis(num);
    
    return 0;
}
