	#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void init_code(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

int solve(vector<int>&A,int B)
{
	long long int ma=INT_MIN,ans=0;
    int n=A.size();
    for(int i=0;i<n;i++)
    {
        ans=0;
        for(int j=i;j<i+B;j++)
        {
            ans+=A[j%n];

        }
        if(ans>ma)
        {
            ma=ans;
        }
        
    }
    return ma;
}
int main()
{
	init_code();
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];

	}
	int m;
	cin>>m;
	cout<<solve(v,m);
}