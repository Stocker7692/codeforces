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
	int n,s,m;
	cin>>n>>s>>m;
	if(m>n || (6*n)<(7*m))
	{
		cout<<"No"<<endl;
	}
	else{
		int days=(m*s)/n;
		if((m*s)%n!=0)
		{
			days++;
		}
		cout<<"Yes"<<" "<<days;

	}

}