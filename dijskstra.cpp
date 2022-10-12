#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"Enter the number of nodes"<<endl;
	int n;
	cin>>n;
	cout<<"Enter the number of edges"<<endl;
	int e;cin>>e;
	vector<vector<int>>g(n+1);
	int cost[n+1][n+1];
	vector<int>dis(n+1,9999999999);
	cout<<"Enter two adjacent node and their cost"<<endl;
	for(int i=0;i<e;i++) {
		int u,v,c; cin>>u>>v>>c;
		g[u].push_back(v);
		g[v].push_back(u);
		cost[u][v]=c;
		cost[v][u]=c;
	}
	cout<<"Enter source and destination"<<endl;
	int src,dest;
	cin>>src>>dest;
	dis[src]=0;
	priority_queue<pair<int ,int >>pq;
	pq.push({0,src});
	while(!pq.empty()) {
		pair<int,int>cur=pq.top();pq.pop();
		int u=cur.second;
		int c=cur.first;
		c=c*(-1);
		for(int i=0;i<g[u].size();i++) {
			int v=g[u][i];
			if(dis[v]>c+cost[u][v]) {
				dis[v]=c+cost[u][v];
				pq.push({dis[v]*-1,v});
			}

		}
	}
	cout<<dis[dest]<<endl;
}
