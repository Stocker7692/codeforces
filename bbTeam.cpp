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
	long long int n;
	cin>>n;
	vector<long long int>arr(n);
	for(long long int i=0;i<n;i++){
		long long int x;
		cin>>x;
		arr[i]=x;
	}
	sort(arr.begin(),arr.end());
	int ans=-1;
	int f=1;
	int i=0,j=0;
	while(j<n){
		if(arr[j]-arr[i]<=5) j++;
		else {
			f=0;
			ans=max(ans,j-i);
			i++;
		}
	}
	ans=max(ans,j-i);
	if(f==1) cout<<n<<endl;
	else cout<<ans<<endl;

}