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
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		map<int,int>m;
		for(int i=0;i<n;i++)
		{
			m[arr[i]]++;
		}
		int ans=0;
	map<int,int> ::iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
       // cout<<(*it).first<<" "<<(*it).second<<endl;
    	if((*it).second<(*it).first)
    	{
    		ans=ans+(*it).second;
    	}
    	else{
    		ans=ans+(*it).first-1;
    	}
    }

    cout<<ans<<endl;

		

	}
}