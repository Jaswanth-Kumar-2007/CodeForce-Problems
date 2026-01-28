#include <iostream>
using namespace std;

int main(){
    string w1;
    string w2;
    cin >> w1;
    cin >> w2;
    for (int i = 0;i < w1.length();i++){
        if ((char)tolower(w1[i]) != (char)tolower(w2[i])){
            if ((int)((char)tolower(w1[i])) > (int)((char)tolower(w2[i]))){
                cout << 1;
                return 0;
            }else{
                cout << -1;
                return 0;
            }
        }
    }
    cout << 0;
    return 0;
}