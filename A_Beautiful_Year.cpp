#include <iostream>
#include <vector>
using namespace std;

vector<int> fun(int n){
    vector<int> res;
    while(n != 0){
        int s = n%10;
        res.push_back(s);
        n = n/10;
    }
    return res;
}

int main(){
    int r;
    cin >> r;
    vector<int> res = fun(r+1);
    while (res[0] == res[1] || res[1] == res[2] || res[2] == res[3] || res[3] == res[0] || res[0] == res[2] || res[1] == res[3]){
        r += 1;
        res = fun(r+1);
    }
    cout << r+1;
}