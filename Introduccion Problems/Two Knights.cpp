#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
 
 
void solve(int n) {
	if(n == 1) cout<<"0"<<endl;
	else if(n == 2 ) cout << "6" << endl;
	else if(n == 3) cout << "28" << endl;
	else if(n == 4) cout << "96" << endl;
	else if(n > 4) {
		ll ax1 = (10 + (4 * (n-4))) * 2;
		ll ax2 = (14 + (6 * (n-4))) * 2;
		ll ax3 = (20 + (8 * (n-4))) * (n - 4) ;
		ll rfinal = (ax1+ax2+ax3);
 
		//if(n%2 == 1) rfinal += (10 + (8 * (n-4)));
		//cout << ax1 << " " << ax2 << " " << ax3 << endl;
		ll axf = pow(n, 2) * (pow(n, 2) - 1);
		// cout << ax1 << " " << ax2 << " " << ax3 << endl;
		cout <<  (axf - rfinal) / 2<<endl;
	}
}
 
int main()
{
	int n;
	cin>>n;
 
 
	for(int i = 1; i <= n; i++) {
		solve(i);
	}
	return 0;
}
