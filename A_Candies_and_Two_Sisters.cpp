#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0;i < n;i++){
        long long int p;
        cin >> p;
        if (p%2 != 0){
            cout << (p-1)/2 << endl;
        }else{
            cout << (p/2)-1 << endl;
        }
    }
}