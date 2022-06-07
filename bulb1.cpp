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
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,p,k,c=0;
		ll x=p%k;
		int f=0;
		for(ll i=0;i<=x;i++)
		{
			for(ll j=0;j<n;j++)
			{
				if(j%k==i)
				{
					c++;
					if(j==p)
					{
						f=1;
						break;
					}
				}

			}
			if(f==1)
			{
				break;
			}
		}
		cout<<c<<endl;
	}
}