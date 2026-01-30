#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    int k = 1;
    cin >> n;
    vector<int> res;
    for (int i = 0;i < n;i++){
        int p;
        cin >> p;
        res.push_back(p);
    }
    for (int j = 0;j < res.size()-1;j++){
        if ((res[j] == 10 && res[j+1] == 01) || (res[j] == 01 && res[j+1] == 10)){
            k++;
        }
    }
    cout << k;
}