#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool ans = true;
    for (int i = 0;i < n;i++){
        int p;
        cin >> p;
        if (p == 1){
            ans = false;
        }
    }
    if (ans){
        cout << "EASY";
    }else{
        cout << "HARD";
    }
}