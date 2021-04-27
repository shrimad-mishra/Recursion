#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int jumbled(string s1, string s2, int i , int j, int n, int m)
{
    if(i >= n)
        return 0;

    if(j == m-1)
        return 1;
 
    if(s1[i]!=s2[j])
        return jumbled(s1,s2,i+1,j,n,m);
 
    else
        return jumbled(s1,s2,i+1,j+1,n,m) + jumbled(s1,s2,i+1,j,n,m));
}

int main()
{

    int n;
    
    string s2 = "includehelp";
    
    string s1;
    cout << "Input string: ";
    cin >> s1;
    
    n = s1.length();

    cout << "We can jumble " << jumbled(s1, s2, 0, 0, n, 11) << " of ways." << endl;

    return 0;
}