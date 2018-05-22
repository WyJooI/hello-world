#include<iostream>
#include<fstream>
#include<cstring>
#include<time.h>
using namespace std;
ofstream fout("zxc.txt");
int print_permutation(int n,int* A,int cur)
{
	static int count=0;
	if(cur==n)
	{
		count++;
		for(int i=0;i<n;i++)fout << A[i];
		fout << "\n";
	}
	else for(int i=1;i<=n;i++)
	{
		int ok=1;
		for(int j=0;j<cur;j++)
		if(A[j]==i)ok=0;
		if(ok)
		{
			A[cur]=i;
			print_permutation(n,A,cur+1);
		}
	}
	return count;
}
int Apl(int n)
{
	long long num=1,we[20]={0};
	for(int i=1;i<=n;i++)
	{
	    num*=i;
	    if(i+1<=n)we[i+1]=num;
	}
	for(long long i=0;i<num;i++)
	{
		long long x=i;
		int vis[20]={0};
		for(int j=n;j>=1;j--)
		{
			int Znum=(j==1?0:x/we[j]);
			x=(j==1?0:x%we[j]);
			for(int k=n;k>=1;k--)
			if(!vis[k])
			{
				if(Znum)Znum--;
				else
				{
					fout << k;
					if(j==1)fout << "\n";
					vis[k]=1;
					break;
				}
			}
		}
	}
	
} 
int main()
{	
//	Apl(10);
    int A[100];
	int n=print_permutation(10,A,0);
//	cout<< n <<"\n";
	cout << "Time used= "<<(double)clock()/CLOCKS_PER_SEC<<"\n";
	return 0;
} 
