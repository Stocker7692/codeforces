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
		int a,b,c;
		cin>>a>>b>>c;
		if(a==0 && b==0 && c==0)
		{
			cout<<0<<endl;
		}
		else if(a==1 && b==1 && c==1)
		{
			cout<<0<<endl;
		}
		else{
			cout<<1<<endl;
		}
	}
}