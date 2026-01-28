#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int s = 0;
    for (int i = 5;i > 0;i--){
        s += n/i;
        n = n%i;
    }
    cout << s;
    return 0;
}