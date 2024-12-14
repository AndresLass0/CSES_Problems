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

int fac(int n, vector<int>& f){
        if(n == 0) return 1;
        if(f[n] != -1) return f[n];
        f[n] = fac(n-1, f) * n;
        return f[n];
    }
 
    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
 
        string s; cin>>s;
        
        vector<int> f(11, -1);
        map<int, int> mp;
        
        for(char g : s) mp[g]++;
        
        fac(10, f);
        
        
        ll ans = 1;
        
        
        for(auto &g : mp) ans *= f[g.ss];
        
        ll ansF = f[sz(s)] / ans;
        
        cout << ansF << endl;
        
        vector<string> ax;
        sort(all(s));
        do{
            ax.pb(s);
            //cout << s << endl;
        }while(next_permutation(all(s)));
        
        
        //sort(all(ax));
        
        for(string g : ax) cout << g << endl;
        return 0;
    }