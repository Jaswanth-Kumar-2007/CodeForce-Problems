#include <iostream>
using namespace std;

int main(){
    int k,n,w;
    cin >> k;
    cin >> n;
    cin >> w;
    int res = 0;
    int j = 1;
    for (int i = 0;i < w;i++){
        res += j*k;
        j++;
    }
    if (res > n){
        cout << res-n;
    }else{
        cout << 0;
    }
}