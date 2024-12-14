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

int canti(int n){
        if(n == 0) return 0;
        return canti(n/10) + 1;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    string s; cin>>s;
        
    map<char, int> mp;
        
        for(char a : s){
            mp[a]++;
        }
        
        int ci = 0;
        for(auto &g : mp){
            if(g.ss%2 == 1) ci++;
        }
        
        if(ci > 1){cout << "NO SOLUTION" << endl; return 0;}
        
        if(mp.size() == 1) cout << s << endl;
        else{
            string ans = s;
            forn(i, sz(s)) ans[i] = '.';
            int c = 0;
            char ax1;
            for(auto &g : mp){
                
                if(g.ss%2 == 0){
                    for(int i = c; i < c+g.ss/2; i++){
                        ans[i] = g.ff;
                        ans[sz(s) - i - 1] = g.ff;
                    }
                    c += g.ss/2;
                }else{
                    ax1 = g.ff;
                }
            } 
            
            forn(i, sz(s)){
                if(ans[i] == '.') ans[i] = ax1;
            }
        
            cout << ans << endl;
        }
        return 0;
    }
