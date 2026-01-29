#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main(){
    int n;
    int q = 0;
    cin >> n;
    string s;
    cin >> s;
    vector<char> alpha = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for (int i = 0;i < 26;i++){
        bool ans = false;
        for (int j = 0;j < n;j++){
            if (alpha[i] == tolower(s[j])){
            ans = true;
            }
        }
        if (ans){
            q++;
        }
    }
    if (q == 26){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}