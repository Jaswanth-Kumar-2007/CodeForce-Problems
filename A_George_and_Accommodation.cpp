#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int res = 0;
    for (int i = 0;i < n;i++){
        int p;
        int q;
        cin >> p;
        cin >> q;
        int r = q-p;
        if (r-2 >= 0){
            res++;
        }
    }
    cout << res;
}