#include <bits/stdc++.h>
using namespace std;

int LCS3(string s1,string s2, string s3,int m,int n,int o)
{
    if(n == 0 || m == 0 || o == 0)
        return 1;
    if(n < 0 || m < 0 || o < 0)
        return -99;
    if(s1[m]==s2[n] && s2[n]==s3[o] && s1[m]==s3[o])
        return 1 + LCS3(s1,s2,s3,m-1,n-1,o-1);
    return max(LCS3(s1,s2,s3,m-1,n,o),max(LCS3(s1,s2,s3,m,n-1,o),LCS3(s1,s2,s3,m,n,o-1)));
}

int main()
{
    cout << "enter the three strings respectively\n";
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    int m,n,o;
    m = s1.length();
    n = s2.length();
    o = s3.length();

    cout << "length of LCS of the three is : " << LCS3(s1, s2, s3, m-1, n-1, o-1) << endl;

    return 0;
}
