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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        unordered_map<ll,ll>mp;
        ll p=0;
        
        for(ll i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        
        for(auto it:mp)
        {
            
            p=p+(it.second)*(n-(it.second));

        }
        
        cout<<p<<endl;
        
    }
    
    return 0;
}