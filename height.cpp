	#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void init_code(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int main()
{
	init_code();
	long long int n;
	long long int k;
	cin>>n;
	cin>>k;
	vector<long long int>v(n);
	for(long long int i=0;i<n;i++){
		long long int t;
		cin>>t;
		v[i]=t;
	}
	sort(v.begin(),v.end());
	if(k>(n/2)) k=(n/2)+1;
	for(long long int i=n-1;i>=(n/2)+1;i--){
		v[i]++;
	}
	cout<<v[n/2]<<endl;

}