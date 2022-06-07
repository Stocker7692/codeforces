	#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

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
		ll n,d,h;
		cin>>n>>d>>h;
		ll arr[n];
		for(ll i=1;i<=n;i++)
		{
			cin>>arr[i];
		}
		ll x=0;
		ll i;
		ll f=0;
		for( i=1;i<=n;i++)
		{
			if(arr[i]>0)
			{
				x=x+arr[i];
			}
			if(arr[i]==0)
			{
				if(x>d)
				{
					x=x-d;
				}
				else{
					x=0;
				}
				
			}
			if(x>h)
			{
				cout<<"YES"<<endl;
				f++;
				break;

			}
		}

		if(f==0)
		{
			cout<<"NO"<<endl;
		}
		

	}
}