#include <iostream>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin >> n;
    cin >> k;
    cin >> l;
    cin >> c;
    cin >> d;
    cin >> p;
    cin >> nl;
    cin >> np;
    int a = (k*l)/nl;
    int b = c*d;
    int e = p/np;
    int f = min(a,b);
    int res = min(f,e);
    int ans = res/n;
    cout << ans;
}