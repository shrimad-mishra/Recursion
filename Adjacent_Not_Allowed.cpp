#include <bits/stdc++.h>

using namespace std;

int my(vector<vector<int> > arr,int n)
{
    if(n==-1 || n == -2)
        return 0;
    if(n < -2)
        return -9999;
    // cout<<"Max in "<<n<<" "<<max(arr[0][n],arr[1][n])<<endl;
    return max(max(arr[0][n],arr[1][n]) + my(arr,n-2), my(arr,n-1));
}

int main()
{
    int t, n, item;

    cout << "Enter length of the array\n";
    cin >> n;

    vector<vector<int> > arr;

    cout << "Enter the grid\n";
    for (int i = 0; i < 2; i++)
    {
        vector<int> a;
        for (int j = 0; j < n; j++)
        {
            cin >> item;
            a.push_back(item);
        }
        arr.push_back(a);
    }

    cout << "maximum sum possible is: " << my(arr,n-1) << endl;

    return 0;
}
