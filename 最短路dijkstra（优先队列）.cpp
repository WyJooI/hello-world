#include<iostream>
using namespace std;
const int maxn=10000;
const int INF=100000001;
int n,m;
int first[maxn],u[maxn],d[maxn],done[maxn];
struct HeapNode
{
	int d,u;
	bool operator<(const HeapNode& rhs)const{
	    return d>rhs.d;
	}
}
void dijkstra(int s)//最短路起点S 
{
	priority_queue<HeapNode> Q;
	for(int i=0;i<n;i++)d[i]=INF;//d数组s为到i的最短路长度 
	d[s]=0;
	memset(done,0,sizeof(done));
	Q.push((HeapNode){0,s});
	while(!Q.empty())
	{
		HeapNode x=Q.top();Q.pop();
	    int u=x.u;
	    if(done[u])continue;
	    done[u]=true;
	    for(int i=0;i<G[u].size();i++)
	    {
	    	Edge& e=edges[G[u][i]];
	    	if(d[e.to]>d[u]+e.dist)
	    	{
	    		d[e.to]=d[u]+e.dist;
	    		p[e.to]=G[u][i];
	    		Q.push((HeapNode){d[e.to],e.to});
	    	}
	    }
	}
}
int main()
{
	return 0;
} 
