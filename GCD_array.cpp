	#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void init_code(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 

int findGCD(vector<int>arr, int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);
 
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}

void rearrange(vector<int>&v)
{
	int l1=0,h=v.size()-1;
	while(l1<=h)
	{
		if(v[l1]%2==0){
			l1++;
			if(v[h]%2!=0) h--;
		} 
		else if(v[h]%2!=0){
			h--;
			if(v[l1]%2==0) l1++;
		} 
		else {
			swap(v[l1],v[h]);
				l1++;
				h--;
			}
			
			
	}
	if(l1>h) return ;

}
int main()
{
	init_code();
		int t;
	cin>>t;
	while(t--)
	{


	int l,r,k;
	cin>>l>>r>>k;
	vector<int>v;
	for(int i=0;i<r-l+1;i++)
	{
		v.push_back(l+i);
	}


	int l1=0,h=v.size()-1;
	while(l1<=h)
	{
		if(v[l1]%2==0){
			l1++;
			if(v[h]%2!=0) h--;
		} 
		else if(v[h]%2!=0){
			h--;
			if(v[l1]%2==0) l1++;
		} 
		else {
			swap(v[l1],v[h]);
				l1++;
				h--;
			}
			
	}
	int f=0;
	
	for(int i=0;i<k;i++)
	{
		rearrange(v);
		if(findGCD(v,v.size())>1)
		{
			f=1;
			break;
		}
		int product = v[v.size()-1]*v[v.size()-2];
		v.pop_back();
		v.pop_back();
		v.push_back(product);

		
	}

	
	if(findGCD(v,v.size())>1 || f==1)
	{
			cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
}
}