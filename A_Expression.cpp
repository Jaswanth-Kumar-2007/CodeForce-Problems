#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long int n1,n2,n3;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    long long int s;
    long long int p = n1+n2+n3;
    s = p;
    long long int q = n1*n2*n3;
    if (q > s){
        s = q;
    }
    long long int r = n1*(n2+n3);
    if (r > s){
        s = r;
    }
    long long int t = (n1+n2)*n3;
    if (t > s){
        s = t;
    }
    long long int v = n1+(n2*n3);
    if (v > s){
        s = v;
    }
    long long int w = (n1*n2)+n3;
    if (w > s){
        s = w;
    }
    cout << s; 
}