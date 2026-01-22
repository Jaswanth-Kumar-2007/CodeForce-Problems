#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int res;
    for (int i = 0;i < n;i++){
        int k;
        cin >> k;
        int p;
        cin >> p;
        if (k > p){
            int rem = k%p;
            if (rem < k){
                res = rem;
            }else{
                res = rem;
            }
        }else{
            res = p-k;
        }
        cout << res << endl;
    }
}