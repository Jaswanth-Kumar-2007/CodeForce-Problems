#include <iostream>
using namespace std;

int main(){
    int x,y,z;
    cin >> x;
    cin >> y;
    cin >> z;
    int max;
    int sec;
    int thr;
    if (x >= y && x >= z){
        max = x;
        if (y > z){
            sec = y;
            thr = z;
        }else{
            sec = z;
            thr = y;
        }
    }else if(y >= x && y >= z){
        max = y;
        if (x > z){
            sec = x;
            thr = z;
        }else{
            sec = z;
            thr = x;
        }
    }else{
        max = z;
        if (x > y){
            sec = x;
            thr = y;
        }else{
            sec = y;
            thr = x;
        }
    }
    int res = max-sec + sec-thr;
    cout << res;
}