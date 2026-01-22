#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0;i < n;i++){
        int z = 0;
        int k;
        cin >> k;
        string s;
        cin >> s;
        for (int j = 0;j < k;j++){
            for (int p = 0;p < k;p++){
                if (s[j] == s[p]){
                    z++;
                }
            }
        }
        cout << z-k << endl;
    }
}