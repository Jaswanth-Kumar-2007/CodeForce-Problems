#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0;i < n;i++){
        int p,q,r;
        cin >> p;
        cin >> q;
        cin >> r;
        if (p + q == r || q + r == p || r + p == q){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}