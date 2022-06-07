	#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void init_code(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

ll solve(ll n){

    return 0;
}

vector<int>order;
void topo(int src,vector<int>&vis,vector<vector<pair<int,int>>>g)
{
	vis[src]=1;
	for(auto x:g[src])
	{
		if(!vis[x.first])
		{
			topo(x.first,vis,g);
		}
	}
	order.push_back(src);
}


int main()
{
	init_code();
	int v,e;
	cin>>v>>e;

	int src;
	cin>>src;

	vector<vector<pair<int,int>>>g(v);
	for(int i=0;i<e;i++)
	{
		int x,y,w;
		cin>>x>>y>>w;
		g[x].push_back({y,w});
	}

	vector<int>vis(v,0);
	for(int i=0;i<v;i++)
	{
		if(vis[i]==0)
		{
			topo(i,vis,g);
		}
	}

	vector<int>dis(v,INT_MIN);
	// for(int i=0;i<v;i++)
	// {

	// 	dis[i]=INT_MIN;
	// }

	dis[src]=0;

	for(int i=v-1;i>=0;i--)
	{
		if(dis[order[i]]!=INT_MIN)
		{
			for(auto x:g[order[i]])
			{
				int v=dis[x.first];
				int w=x.second;
				int u=dis[order[i]];
				if(u+w>v)
				{
					dis[x.first]=u+w;
				}
			}
		}
	}

	for(int i=0;i<v;i++)
	{
		if(i!=src and dis[i]!=INT_MIN)
		{
			// cout<<src<<"->"<<i<<"="<<dis[i]<<endl;
			cout<<dis[i]<<endl;
		}

	}

	return 0;

}