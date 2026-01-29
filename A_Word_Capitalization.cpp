#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    string res = "";
    res += toupper(s[0]);
    for (int i = 1;i < s.length();i++){
        res += s[i];
    }
    cout << res;
}