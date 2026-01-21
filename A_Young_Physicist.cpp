#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    int sum = 0;
    bool s;
    cin >> n;
    vector<int> vec1;
    vector<vector<int>> vec2;
    for (int i = 0;i < n;i++){
        for (int j = 0;j < 3;j++){
            int p;
            cin >> p; 
            vec1.push_back(p);
        }
        vec2.push_back(vec1);
        vec1.clear();
    }
    s = true;
    for (int l = 0;l < 3;l++){
        for (int m = 0;m < n;m++){
            sum += vec2[m][l];
        }
        if (sum != 0){
            s = false;
        }
    }
    if (s){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}