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
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n;
		cin>>m;
		vector<long long>a;
		vector<long long>b;
		vector<long long>c;
		
		for(ll i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			a.push_back(x);
		}
		for(ll i=0;i<n;i++)
		{
			ll y;
			cin>>y;
			b.push_back(y);
		}
		ll sum=0;
		ll p=-1;
		
		for(ll i=0;i<n;i++)
		{
			if(b[i]==2)
			{
				c.push_back(a[i]);
				continue;
			}
			else{
				sum=sum+a[i];
				p++;
				if(sum>=m)
				{
					break;
				}

			}
			
		}
		if(sum<m)
		{
			
			sort(c.begin(), c.end());
			for(ll i=c.size()-1;i>=0;i--)
			{
				sum=sum+c[i];
				p+=2;
				if(sum>=m)
				{
					break;
				}
			}

		}
		if(sum>=m)
		{
			cout<<p<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	
	



	}
}