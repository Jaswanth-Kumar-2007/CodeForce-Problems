#include <iostream>
using namespace std;

int main(){
    int n;
    int k;
    cin >> n;
    cin >> k;
    int res = 0;
    for (int i = 0;i < n;i++){
        if(k%(i+1) == 0 && k/(i+1) <= n){
            res++;
        }
    }
    cout << res;
}