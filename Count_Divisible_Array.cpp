#include <bits/stdc++.h>
using namespace std;

int countarray(int i,int l, int n,int m)
{
    if(i==n)
        return 1;

    int sum = 0;

    for(int k = 1; k <= m; k++)
    {
        if(l%k == 0 || k%l == 0)
            sum = sum + countarray(i+1,k,n,m);
    }    

    return sum;
}

int main()
{
    int n, m;

    cout << "Enter value of n:\n";
    cin >> n;
    cout << "Enter value of m:\n";
    cin >> m;
    cout << "number of ways are: " << countarray(0,1,n,m) << endl;

    return 0;
}
