#include <iostream>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    int i = 0;
    while (n != 0){
        int s = n%10;
        if (s == 4 || s == 7){
            i++;
        }
        n = n/10;
    }
    if ((i == 4 || i == 7) && i!= 0){
        cout << "YES";
    }else{
        cout << "NO";
    }
}