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
        int n,p,k,utr,days=0;
        cin>>n>>p>>k;
        utr=p%k;
        
        int c=(n-1)-((n-1)/k)*k;
        
        if(utr>c)
        {
           // cout<<"hi";
            days=((c+1)*(((n-1)/k)+1))+((utr-1-c)*((n-1)/k));
        }
        else
        {
            days=(utr*(((n-1)/k)+1));
        }
        
        for(int i=utr;i<n;i=i+k)
        {
            days=days+1;
            if(i==p)
            break;
        }
        
        cout<<days<<endl;
        
    }
}