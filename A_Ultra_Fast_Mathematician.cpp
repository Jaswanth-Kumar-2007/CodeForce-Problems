#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    string n1;
    string n2;
    cin >> n1;
    cin >> n2;
    int len = n1.length();
    string res = "";
    vector<char> ans;
    for (int i = 0;i < len;i++){
        if (n1[i] == '1' && n2[i] == '1'){
            ans.push_back('0');
        }else if(n1[i] == '1' || n2[i] == '1'){
            ans.push_back('1');
        }else{
            ans.push_back('0');
        }
    }
    for (char val:ans){
        res += val;
    }
    cout << res;
}