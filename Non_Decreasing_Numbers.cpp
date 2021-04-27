#include <bits/stdc++.h>
using namespace std;

int count(vector<int> a, int n, int i)
{
    if(i >= 10)
        return 0;
    if(n==0)
        return 1;
    return count(a,n-1,i) + count(a,n,i+1);
}

int main()
{
    int t, n, item;
    
    cout << "Enter number of days\n";
    cin >> n;
    cout << "Enter calories\n";
    vector<int> a;
    
    for (int j = 0; j < 10; j++) 
    {
        a.push_back(j);
    }
    
    cout << "Total number are : " << count(a,n,0) << endl;

    return 0;
}
