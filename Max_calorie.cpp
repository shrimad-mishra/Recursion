#include <bits/stdc++.h>
using namespace std;

int maximumCalorie(vector<int> v, int i ,int c,int n)
{
    if(i >= n)
        return 0;
    if(c==0 && c%3==0)
        return max(v[i]+maximumCalorie(v,i+1,c+1,n),maximumCalorie(v,i+1,0,n));
    if(c!=0 && c%3!=0)
        return max(v[i]+maximumCalorie(v,i+1,c+1,n),maximumCalorie(v,i+1,0,n));
    if(c!=0 && c%3==0)
        return maximumCalorie(v,i+1,c,n);
}

int main()
{
    int t, n, item;
    
    cout << "Enter number of days\n";
    cin >> n;
    cout << "Enter calories\n";
    vector<int> a;
    
    for (int j = 0; j < n; j++) {
        scanf("%d", &item);
        a.push_back(item);
    }
    
    cout << "Maximum calorie sudhir can take: " << maximumCalorie(a,0,0,n) << endl;

    return 0;
}
