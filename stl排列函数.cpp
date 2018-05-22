#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n=5,p[10]={1,2,3,4,5,6,7,8,9};
	sort(p,p+n);
	do
	{
		for(int i=0;i<n;i++)cout << p[i];
		cout <<"\n";
	}while(next_permutation(p,p+n));//下一个排列 
	return 0;
} 
