#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    string res = "";
    for (int i = 0;i < s1.length();i++){
        res += s1[s1.length()-i-1];
    }
    if (res == s2){
        cout << "YES";
    }else{
        cout << "NO";
    }
}