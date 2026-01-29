#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    int l = 0;
    int u = 0;
    for (int i = 0;i < s.length();i++){
        if (isupper(s[i]) == true){
            u++;
        }else{
            l++;
        }
    }
    string res = "";
    if (u > l){
        for (int j = 0;j < s.length();j++){
            res += toupper(s[j]);
        }
    }else{
        for (int j = 0;j < s.length();j++){
            res += tolower(s[j]);
        }       
    }
    cout << res;
}