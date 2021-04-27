#include <bits/stdc++.h>

using namespace std;

int my(vector<int> price, vector<int> weight, int w,int i)
{
    if( w < 0 || i >= price.size())
        return -99;
    
    if(w == 0)
        return 0;

    return max(price[i] + my(price,weight,w-weight[i],i),my(price,weight,w,i+1));
}

int main()
{
    int n, item, w;

    cout << "enter number of item and total weights\n";
    cin >> n >> w;

    cout << "Enter the prices\n";
    vector<int> price;

    for (int j = 0; j < n; j++) {
        scanf("%d", &item);
        price.push_back(item);
    }

    cout << "Enter the weights\n";
    vector<int> weight;

    for (int j = 0; j < n; j++) {
        scanf("%d", &item);
        weight.push_back(item);
    }

    //sort(price,weight);
    
    cout << "result is: " << my(price, weight,w,0) << endl;

    return 0;
}
