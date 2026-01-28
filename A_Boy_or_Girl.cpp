#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<char> res;
    for (int i = 0;i < s.length()-1;i++){
        bool val = true;
        for (int j = i+1;j < s.length();j++){
            if (s[i] == s[j]){
                val = false;
            }
        }
        if (val){
            res.push_back(s[0]);
        }
    }
    if (res.size() % 2 == 0){
        cout << "IGNORE HIM!";
    }else{
        cout << "CHAT WITH HER!";
    }
}