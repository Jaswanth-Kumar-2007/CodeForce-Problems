#include <iostream>
using namespace std;

int main(){
    int limak;
    int bob;
    cin >> limak;
    cin >> bob;
    int i = 0;
    while (limak <= bob){
        limak *= 3;
        bob *= 2;
        i++;
    }
    cout << i;
}