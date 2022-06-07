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
	int n;
	cin>>n;
	while(n--)
	{
		int N;
		string s;
		string t;
		cin>>N;
		cin>>s;
		cin>>t;
		int count=0;
		for(int i=0;i<N;i++)
		{
			for(int j=i+1;j<N;j++)
			{
				if(s[i]=='1'&&t[i]=='1')
				{
					count++;
					s[j]='0';
					t[j]='0';
					break;
				}
				else if(s[i]=='1'&&t[j]=='1')
				{
					count++;
					s[j]='0';
					t[j]='0';
					break;

				}
				else if(s[j]=='1'&&t[i]=='1')
				{
					count++;
					s[j]='0';
					t[j]='0';
					break;
				}
				else if(s[j]=='1'&&t[j]=='1')
				{
					count++;
					s[j]='0';
					t[j]='0';
					break;
				}
			}
		}
		cout<<count<<endl;
	}
}