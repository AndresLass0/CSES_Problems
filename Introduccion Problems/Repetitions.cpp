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

    string s; cin>>s;
    int r = 0;
    int l = 0;
    int mx = -1, c = 0;
    while(r < sz(s)){
        if(s[l] == s[r]){
            c++;
            mx = max(mx, c);
        }else{
            l = r;
            c = 0;
            r--;
        }
        r++;
    }
    

    return 0;
}