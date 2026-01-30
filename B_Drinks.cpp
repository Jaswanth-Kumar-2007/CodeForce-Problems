#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0;i < n;i++){
        int p;
        cin >> p;
        sum += p;
    }
    double res = (double)sum/(double)n;
    cout << fixed << setprecision(12) << res;
}