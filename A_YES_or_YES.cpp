#include <iostream>
#include <cctype>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0;i < n;i++){
        string s;
        cin >> s;
        if (s == "YES" || s == "yes" || s == "Yes" || s == "yEs" || s == "yeS" || s == "YEs" || s == "yES" || s == "YeS"){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}