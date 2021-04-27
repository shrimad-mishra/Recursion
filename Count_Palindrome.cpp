#include <bits/stdc++.h>
using namespace std;

int d = 0;

bool check(string s)
{
    int start  =  0;
    int end = s.length()-1;
    //cout<<s<<endl;
    while(start <= end)
    {
        if(s[start] != s[end])
            return false;
        start++;
        end--;
    }

    return true;
}

void count(string p,string s,int i)
{
    if(i < 0)
        return;
    
    if(check(p))
    {
        cout<<p<<endl;
        d++;
    }
    
    //cout<<"D is "<<d<<endl;

    p.push_back(s[i]);
    //cout<<"Push "<<p<<endl;
    count(p,s,i-1);
    p.pop_back();
    //cout<<"Pop "<<p<<endl;
    count(p,s,i-1);
}

int main()
{
    string str;

    cout << "Enter number of strings\n";
    cin >> str;

    count("", str ,str.length()-1);

    cout<<"Number of total palindromic substring is: "<<d<<endl;

    return 0;
}
