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

int longestSubSeg(int a[], int n, int k)
{
    int cnt0 = 0;
    int l = 0;
    int max_len = 0;
 
    
    for (int i = 0; i < n; i++) {
        if (a[i] == 0)
            cnt0++;
 
        while (cnt0 > k) {
            if (a[l] == 0)
                cnt0--;
            l++;
        }
 
        max_len = max(max_len, i - l + 1);
    }
 
    return max_len;
}
 
int main() {
    init_code();
    
	string s;
	int changeK;
	cin>>s;
	cin>>changeK;
	int n = s.size();
	int arr[n];
	for(int i=0;i<n;i++){
		arr[i]=s[i]-'0';
	}
	
	cout<<longestSubSeg(arr,n,changeK);
}