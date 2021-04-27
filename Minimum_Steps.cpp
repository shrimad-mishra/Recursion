#include <bits/stdc++.h>
using namespace std;

int minimumSteps(int n)
{
    if(n==1)
        return 0;
    if(n < 0)
        return 999;
    if( n%2 == 0 && n%3 == 0)
    {
        return min(1+minimumSteps(n/2),1 + min(minimumSteps(n/3),1 + minimumSteps(n-1)));
    }
     else if( n%2 == 0 && n%3 != 0)
    {
        return min(1 + minimumSteps(n/2),1 + minimumSteps(n-1));
    }
    else if( n%2 != 0 && n%3 == 0)
    {
        return min(1 + minimumSteps(n/3),1 + minimumSteps(n-1));
    }
    else
    {
        return 1 + minimumSteps(n-1);
    }
}

int main()
{
    int n, item;

    cout << "enter the initial number, n \n";
    cin >> n;

    cout << "Minimum number of steps: " << minimumSteps(n) << endl;

    return 0;
}
