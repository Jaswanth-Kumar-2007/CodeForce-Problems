#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long int n,k;
    cin >> n;
    cin >> k;
    if (n%2 == 0){
        if (n/2 < k){
            cout << 2*(k- n/2);
        }else{
            cout << 2*k-1;
        }
    }else{
        if ((n+1)/2 < k){
            cout << 2*(k - (n+1)/2 );
        }else{
            cout << 2*k-1;
        }
    }
    return 0;
}