	#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void init_code(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

int solve_same(vector<int>v,string s,int n)
{
	int res=0;

	if(s[0]=='0')
	{
		
		for(int i=0;i<n;i++)
		{
			if(i%2==0)
			{
				if(i!=0 && s[i]!='0')
				{
					res+=v[i];
					
				}
				else continue;
			}
			else{
				if(i!=1 && s[i]!='1')
				{
					res+=v[i];
					
				}
				else continue;
			}

		}
	}
	else{
		
		for(int i=0;i<n;i++)
		{
			if(i%2==0)
			{
				if(i!=0 && s[i]!='1')
				{
					res+=v[i];
					
				}
				else continue;
			}
			else{
				if(i!=1 && s[i]!='0')
				{
					res+=v[i];
					
				}
				else continue;
			}

		}

	}
	return res;
}

int solve_alternate(vector<int>v,string s,int n)
{
	char even_index=s[0];
	int res=0;
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			
			if(i!=0 && s[i]==even_index)
			{
				res+=v[i];
				if(s[i]=='0')
				{
					s[i]='1';
				}
				else{
					s[i]='0';
				}

			}
			even_index=s[i];
		}
		else{
			if(s[i]!=s[i-1])
			{
				res+=v[i];
				s[i]=s[i-1];
			}
			else continue;
		}
	}
	
	return res;
}
int main()
{
	init_code();
	int n;
	cin>>n;
	string s;
	cin>>s;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int val;
		cin>>val;
		v.push_back(val);
	}
	int res = min(solve_same(v,s,n),solve_alternate(v,s,n));
	cout<<res;
}