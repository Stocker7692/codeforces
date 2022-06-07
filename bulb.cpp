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
		ll n,p,k;
		cin>>n>>p>>k;
		ll c=0,f=0;

		for(ll j=0;j<k;j++)
		{
			for(ll i=0;i<n;i++)
			{
				if(i%k==j )
				{
					c++;
					if(i==p)
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