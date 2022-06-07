#include <bits/stdc++.h>
using namespace std;
#define MOEZ ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
#define mem(ar,x) memset(ar , x , sizeof(ar));
#define F first
#define S second
#define sz(x) x.size()
#define pb push_back
#define eb emplace_back
#define all(x) x.begin() , x.end()
#define al(x,n) x , x+n
#define f(i,x,n) for(int i = x; i < n;i++)
#define input(ar , n) for(ll i = 0; i < n;i++)cin >> ar[i];
typedef long long ll;
typedef double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<int> vl;
typedef vector<pii> vpi;
typedef vector<pii> vpl;
const int mod = 1e9 + 7;
const ll N = 1e9;
const ld pi = 3.14159265359;

void init_code(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
 
int main() {
    init_code();
    MOEZ
    ll t;
    cin >> t;
    while(t--){
    	int n;
    	cin>>n;
    	vector<int>v;
    	for(int i=0;i<n;i++){
    		int x;
    		cin>>x;
    		v.push_back(x);
    	}
    	bool f=0;
    	vector<int>ans(n);
    	for(int i=0;i<n;i++){
    		ans[i]=i+1;
    	}
    	int x=1;
    	for(int i=1;i<n;i++){
    		if(v[i]==v[i-1]){
    			f=1;
    			x=i;
    			swap(ans[i],ans[i-1]);
    		}
    	}
    	// ans[x]=1;

    	if(f==0) cout<<-1;
    	else{
    		for(int i=0;i<n;i++){
    			cout<<ans[i]<<" ";
    		}
    	}
    	cout<<endl;

        
    }
}