#include <iostream>
using namespace std;

int main(){
    int k;
    cin >> k;
    for (int i = 0;i < k;i++){
        int n;
        int s;
        int x;
        cin >> n;
        cin >> s;
        cin >> x;
        int sum = 0;
        for (int j = 0;j < n;j++){
            int p;
            cin >> p;
            sum += p;
        }
        int res = s-sum;
        if (res % x == 0 && res >= 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}



