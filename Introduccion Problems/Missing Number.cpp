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
		int n; cin>>n;
 
		vector<bool> ar(n, 0);
		forn(i, n){
			int a; cin>>a;
			ar[a-1] = 1;
		}
 
		forn(i, n){
			if(ar[i] == 0){
				cout<<i+1<<endl;
				break;
			}
		}
	}
 
	int main(){
		
		debugMode();
		int t = 1; //cin>>t;
 
		while(t--){
			solve();
		}
 
		return 0;
	}