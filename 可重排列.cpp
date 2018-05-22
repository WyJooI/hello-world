#include<iostream>
#include<fstream> 
using namespace std;
ofstream fout("zxc.txt"); 
int print_permutation(int n,int* P,int* A,int cur)
{
	static int count=0;
	if(cur==n)
	{
		count++;
		for(int i=0;i<n;i++)fout << A[i];
		fout << "\n";
	}
	else for(int i=0;i<n;i++)
	if(!i||P[i]!=P[i-1])
	{
		int c1=0,c2=0;//生成中A的p[i]数量，P的数量 
		for(int j=0;j<cur;j++)if(A[j]==P[i])c1++;
		for(int j=0;j<n;j++)if(P[j]==P[i])c2++;
		if(c1<c2)
		{
			A[cur]=P[i];
			print_permutation(n,P,A,cur+1);
		}
	}
	return count;
}
int main()
{
	int p[20]={1,1,2,2,3,4,4,5,6,6},A[20];
	int n=print_permutation(10,p,A,0);
	cout << n<<"\n";
	return 0;
}
