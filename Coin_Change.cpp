#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int find(vector<int> v , int i, int k)
{
	if(i >= v.size() )
		return 9999;
	if(k==0)
		return 0;
	if( k < 0)
		return 9999;
	return min(1+find(v,i,k - v[i]), find(v,i+1,k));
	
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

	int c;
	cout<<"Enter the amount"<<endl;
	cin>>c;

	cout<<"Minimum coins required is "<<find(v , 0 , c)<<endl;

	return 0;
}