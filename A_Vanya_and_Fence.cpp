#include <iostream>
using namespace std;

int main(){
    int n;
    int h;
    cin >> n;
    cin >> h;
    int res = 0;
    for (int i = 0;i < n;i++){
        int p;
        cin >> p;
        if (p > h){
            res += 2;
        }else{
            res++;
        }
    }
    cout << res;
}