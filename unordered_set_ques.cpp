// Given N strings and Q quries .
// In each qurie you are given a string 
// print yes if string is present otherwise print no

// N<=10^6
// |S|<=100;
// Q<=10^6

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
	unordered_set<string>str;
	init_code();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		str.insert(s);
	}
	int q;
	cin>>q;
	while(q--)
	{
		string p;
		cin>>p;
		if(str.find(p)==str.end())
		{
			cout<<"No"<<endl;
		}
		else{
			cout<<"Yes"<<endl;
		}
	}
}