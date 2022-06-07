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
int main()
{
	init_code();
	int n,m,source;
	cin>>n>>m;
	vector<pair<int,int>>g[n+1];

	int a,b,wt;
	for(int i=0;i<m;i++)
	{
		cin>>a>>b>>wt;
		g[a].push_back(make_pair(b,wt));
		g[b].push_back(make_pair(a,wt));
	}

	cin>>source;

	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

	vector<int> distTo(n+1,10000);
	distTo[source]=0;

	pq.push(make_pair(distTo[source],source));

	while(!pq.empty())
	{
		int dist=pq.top().first;
		int prev=pq.top().second;
		pq.pop();

		for(auto it:g[prev])
		{
			int next=it.first;
			int nextDist=it.second;

			if(distTo[next]>dist+nextDist)
			{
				distTo[next]=dist+nextDist;
				pq.push(make_pair(distTo[next],next));
			}


		}
	}
	for(int i=1;i<n+1;i++)
	{
		cout<<i<<" "<<distTo[i]<<endl;
	}

}