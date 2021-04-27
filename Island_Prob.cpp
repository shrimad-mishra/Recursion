#include <bits/stdc++.h>
using namespace std;

double solve(int x, int y, int k, int n)
{

    if (k == 0)
        return 1.0;

    double prob = 0;

    if (x > 0)
        prob += solve(x - 1, y, k - 1, n) * (.25);

    if (x < n - 1)
        prob += solve(x + 1, y, k - 1, n) * (.25);

    if (y > 0)
        prob += solve(x, y - 1, k - 1, n) * (.25);

    if (y < n - 1)
        prob += solve(x, y + 1, k - 1, n) * (.25);

    return prob;
}

int main()
{
    cout << "Enter size of N: "<<endl;
    int n, k;
    cin >> n;

    cout << "Enter initial location: "<<endl;
    int x, y;
    cin >> x >> y;

    cout << "Enter moves:"<<endl;
    cin >> k;

    cout << "Probability of being alive: ";
    cout << solve(x, y, k, n) << "\n";

    return 0;
}
