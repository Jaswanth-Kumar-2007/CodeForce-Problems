#include <iostream>
#include <vector>
using namespace std;

int main(){
    int res = 0;
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> ans;
    for (int i = 0;i < n;i++){
        int p;
        cin >> p;
        ans.push_back(p);
    }
    for (int val:ans){
        if (val >= ans[k-1] && val > 0){
            res++;
        }
    }
    cout << res;
}