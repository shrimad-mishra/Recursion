#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int find_profit(vector<int> v , int i , int j, int k)
{
	if(i > j)
		return 0;
	if(i <= j)
		return max(v[i]*k+ find_profit(v,i+1,j,k+1), v[j]*k + find_profit(v,i,j-1,k+1));
	else
		return 0;
}

int main()
{
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;

	vector<int> v;

	cout<<"Enter the data in the array"<<endl;
	for( int i = 0; i < n; i++)
	{
		int d;
		cin>>d;
		v.push_back(d);
	}

	cout<<"Maximum profit that can be made is "<<find_profit(v , 0 , n - 1,1)<<endl;

	return 0;
}