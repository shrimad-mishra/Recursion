#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
int dp[101][2];

long long int myrecur(int i, int last, int n)
{
    // base case
    if (i >= n)
        return 1;

    // memoization by not computing the 
    // subproblems computed already
    if (dp[i][last] != -1) 
        return dp[i][last];

    // store subproblem results
    if (last == 0) {
        dp[i][last] = (myrecur(i + 1, 0, n) % MOD + myrecur(i + 1, 1, n) % MOD) % MOD;
    }
    else {
        dp[i][last] = myrecur(i + 1, 0, n) % MOD;
    }

    return dp[i][last];
}

long long int countofSequence(int n)
{
    //initialize the dp store
    for (int i = 0; i <= n; i++) {
        dp[i][0] = -1;
        dp[i][1] = -1;
    }
    return (myrecur(1, 0, n) % MOD + myrecur(1, 1, n) % MOD) % MOD;
}

int main()
{
    int t, n, item;
    
    cout << "Enter number of testcases\n";
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        cout << "Enter sequence length\n";
        cin >> n;
        cout << "Numbder of possible sequence is: " << countofSequence(n) << endl;
    }

    return 0;
}
