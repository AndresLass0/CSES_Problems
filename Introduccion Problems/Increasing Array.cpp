#include <bits/stdc++.h>
using namespace std;

#define endl '\n' 
#define forn(i, n) for(int i = 0; i < n; i++)
#define forab(i, a, b) for(int i = a; i < b; i++)
#define DBG(x) cerr << #x << " = " << x << endl;
#define ss second
#define ff first
#define pb push_back
#define cou(x) cout << x << endl;
#define cou2(x, y) cout << x << ' ' << y << endl;
#define cou3(x, y, z) cout << x << ' ' << y << ' ' << z << endl;
#define each(x) for(auto g : x) cout << g << ' ';
#define all(x) x.begin(), x.end()
#define sz(x) (int)((x).size())

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> ii;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<int> ar(n);
    forn(i, n) cin>>ar[i];
    
    ll ans = 0;
    
    forab(i, 1, n){
        ll ax = (ar[i-1])  - ar[i];
        //cout << ar[i] << " "<< ax << endl;
        //
        if(ax > 0){ ans += ax; ar[i] = ar[i-1];}
    }
    
 
    cout << ans << endl;

    return 0;
}