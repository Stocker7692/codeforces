	#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void init_code(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

int solve(vector<int>v,int x,int k)
{
	int ans=1;
	int n=v.size();
	for(int i=1;i<n;i++)
	{

		if(abs(v[i]-v[i-1])>abs(v[i]-v[i+1]) && k!=0)
		{
			ans++;
			k--;
		}
		else if(x<=0 && k>0)
		{
			ans += n-i;
			k=0;
			break;
		}
		else{
			if(x>=abs(v[i]-v[i-1]))
			{
				x-=abs(v[i]-v[i-1]);
			    ans++;
			}
			else break;
			
		}
		if(k==0 && x==0)
		{
			break;
		}
	}
	return ans;
}
int main()
{
	init_code();
	int n,x,k;
	cin>>n>>x>>k;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int val;
		cin>>val;
		v.push_back(val);
	}

	int res = solve(v,x,k);
	cout<<res<<endl;
	
}