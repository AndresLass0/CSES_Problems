/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int t; cin>>t;
    
    while(t--){
        ll x, y; cin>>y>>x;
        ll ans = 0;
        
        if(x == y){
            ans = ((x * x) - x) + 1;
        }else if(y > x){
            ans = ((y * y) - y) + 1;
           
           int ax  = abs(x - y);
           if(y%2 == 0) ans += ax;
           else ans -= ax;

            
        }else if(x > y){
            ans = ((x * x) - x) + 1;
            
            int ax  = abs(x - y);
            if(x%2 == 1) ans += ax;
           else ans -= ax;
            
        }
        cout << ans << endl;
    }
    return 0;
}