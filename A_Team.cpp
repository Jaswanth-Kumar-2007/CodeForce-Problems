#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int j = 0;
    for (int i = 0;i < n;i++){
        int x,y,z;
        cin >> x;
        cin >> y;
        cin >> z;
        if (x + y + z >= 2){
            j++;
        }
    }
    cout << j;
}