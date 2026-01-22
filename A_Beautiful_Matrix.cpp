#include <iostream>
#include <vector>
using namespace std;

int main(){
    int x = 0;
    int y = 0;
    int nx;
    int ny;
    int sum = 0;
    for (int i = 0;i < 5;i++){
        x = 0;
        for (int j = 0;j < 5;j++){
            int p;
            cin >> p;
            if (p == 1){
                nx = x;
                ny = y;
            }
            x++;   
        }
        y++;
    }
    if (ny != 2){
        if (ny > 2){
            sum += ny-2;
        }else{
            sum += 2-ny;
        }
    }
    if (nx != 2){
        if (nx > 2){
            sum += nx - 2;
        }else{
            sum += 2-nx;
        }
    }
    cout << sum;
}