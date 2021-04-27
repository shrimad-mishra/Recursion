#include <bits/stdc++.h>

using namespace std;

int my(int rem,int n, int x, int y, int z)
{
    if(n < 0)
        return 9999;
    if( n == 0)
        return 1;

    return min(x + my(rem + 1, n-1,x,y,z),z + my(rem + rem, n-1-rem,x,y,z));
}

int main()
{
    int t, n, item;
    
    cout << "Enter number of characters\n";
    cin >> n;
    
    int x, y, z;
    
    cout << "Insert time for insertion, deletion and copy respectively\n";
    cin >> x >> y >> z;

    cout << "Minimum time is: " << my(1,n - 1,x, y, z)<< endl;
    return 0;
}
