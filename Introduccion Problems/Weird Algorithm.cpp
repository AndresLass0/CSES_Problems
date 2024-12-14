#include <bits/stdc++.h>
 
	using namespace std;
	using ll = long long;
 
	#define forn(i, x) for(int i = 0; i < x; i++)
	#define all(x) x.begin(), x.end()
	#define ss second
	#define ff first
	#define YES cout<<"YES"<<endl
	#define NO cout<<"NO"<<endl;
 
	inline void debugMode() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif 
	}
 
 
	void solve(){
		ll n; cin >> n;
		cout<<n<<" ";
		while(n > 1){
        if(n % 2 == 0){
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
        cout << n << " ";
    }
    cout << endl;
 
	}
 
	int main(){
		
		debugMode();
		int t = 1; //cin>>t;
 
		while(t--){
			solve();
		}
 
		return 0;
	}
 
