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
		ll N,A,B,C;
		cin>>N;
		ll ans=0;
		for(C=1;C<=N;C++)
		{
			for (B=C;B<=N;B+=C)
			{
				if(B%C==0)
				{
					for(A=B;A<=N;A+=B)
					{
						if(A%B==C)
						{
							ans+=1;

						}
						
					}
				}
			}
		}

		cout<<ans<<endl;
	}
}