#include <bits/stdc++.h>
using namespace std;

bool check(string p, string s,int j)
{
    int c = 0;
    for(auto i : p)
    {
        if(i==s[j])
        {
            c++;
        }
        j++;
    }
    return c==p.size(); 
}

int minimumMoves(string p,string s, int i)
{ 
    if(i >= s.length())
        return 0;
    if(check(p,s,i))
    {
        int t = p.length();
        p = p + p;
        return 1 + minimumMoves(p,s,i+t); 
    }
    else
    {
        p.push_back(s[i]);
        return 1 + minimumMoves(p,s,i+1);
    }
}

int main()
{
    cout << "Enter input string\n";
    string s;
    cin >> s;
    string p ;
    p.push_back(s[0]);
    cout << "Minimum steps to form te string: " <<minimumMoves(p,s,1) + 1<<endl;

    return 0;
}
