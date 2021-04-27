#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int find_palindrome(vector<int> v, int i, int j)
{
	if( i==j )
		return 0;
	if( i < j)
	{
		if(v[i]==v[j])
			return find_palindrome(v,i+1,j-1);
		if(v[i] > v[j])
		{
			v[j-1] = v[j-1] + v[j];
			return find_palindrome(v,i,j-1) + 1;
		}
		else
		{
			v[i+1] = v[i+1] + v[i];
			return find_palindrome(v,i+1,j) + 1;	
		}
	}

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

	cout<<"Total number of the way to make this array is palindrome "<<find_palindrome(v , 0 , n - 1)<<endl;

	return 0;
}