#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    //return solve(n-1) + solve(n-2) + solve(n-3);
    int count = 0;
    for(int i = 1; i <= 3; i++)
    {
        count = count + solve(n-i);
    }
    
    return count;
}

int main()
{
    cout << "Enter Nth stair: ";
    int n;
    cin >> n;
    cout << "Total ways: ";
    cout << solve(n) << "\n";

    return 0;
}
