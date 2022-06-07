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
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<int>a;
		for(int i=0;i<n;i++)
		{
			int val;
			cin>>val;
			a.push_back(val);
		}
		vector<int>b;
		for(int i=0;i<n;i++)
		{
			int val;
			cin>>val;
			b.push_back(val);
		}

		int res=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(k>=a[j])
				{
					k+=b[j];
					a[j]=INT_MAX;

				}
			}
		}
		cout<<k<<endl;

	}
}