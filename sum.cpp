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
    	int ma,sum=0;
    	bool f=0;
    	for(int i=0;i<n;i++){
    		ma=INT_MIN;
    		sum=0;
    		for(int j=i;j<n;j++){
    			sum+=v[j];
    			ma=max(ma,v[j]);
    			if(ma<sum){
    				f=1;
    				break;
    			}
    		}
    		if(f==1) break;
    	}
    	if(f==1) cout<<"NO"<<endl;
    	else cout<<"YES"<<endl;
        
    }
}