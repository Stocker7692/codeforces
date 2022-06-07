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
		ll N,M,a,b;
		cin>>N>>M;
		ll arr[N];
		for(ll i=0;i<N;i++)
			{
				arr[i]=0;
			}
		for(ll i=0;i<M;i++)
		{
			cin>>a>>b;
			ll k;
			// if(b%2==0)
			// {
			// 	k=1;

			// }
			// else{
			// 	k=2;
			// }
			for(ll j=1;j<=N;j++)
			{
				if(j%b!=0 && arr[j-1]==0)
				{
					arr[j-1]=a;
				}
				else if(j%b!=0 && arr[j-1]<a)
				{
					arr[j-1]=a;
				}
			}

		}
		ll sum=0;
		for(ll i=0;i<N;i++)
		{
			//cout<<arr[i];
			sum+=arr[i];
		}
		//cout<<endl;
		cout<<sum<<endl;
	}
}