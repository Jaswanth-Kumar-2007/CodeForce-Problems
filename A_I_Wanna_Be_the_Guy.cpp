#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int n1;
    cin >> n1;
    vector<int> ans;
    vector<int> check;
    for (int i = 0;i < n1;i++){
        int p;
        cin >> p;
        ans.push_back(p);
    }
    int n2;
    cin >> n2;
    for (int j = 0;j < n2;j++){
        int q;
        cin >> q;
        ans.push_back(q);
    }
    for (int k = 0;k < n;k++){
        bool found = false;;
        for (int val:ans){
            if ((k+1) == val){
                found = true;
            }
        }
        if (found){
            check.push_back(k+1);
        }
    }
    if (check.size() == n){
        cout << "I become the guy.";
    }else{
        cout << "Oh, my keyboard!";
    }
}