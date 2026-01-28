#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> temp;
    for (int i = 0;i < s.length();i += 2){
        string temp1 = "";
        temp1 += s[i];
        temp.push_back(stoi(temp1));   
    }
    sort(temp.begin(),temp.end());
    for (int j = 0;j < temp.size()-1;j++){
        cout << temp[j] << "+";
    }
    cout << temp[temp.size()-1];
}