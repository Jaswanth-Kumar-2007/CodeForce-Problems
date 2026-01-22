#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int t;
    string B = "B";
    string G = "G";
    cin >> t;
    string p;
    string q;
    string res = "";
    cin >> p;
    int i = 0;
    int j = 0;
    while (i != t){
        int j = 0;              

        if (i == 0){
            q = p;              
        }else{
            q = res;     
        }

        res = "";
        while(j != n){
            string temp = "";
            string temp1 = "";
            temp += q[j];
            temp1 += q[j+1];
            if (temp == B && temp1 == G){
                res += "GB";
                j +=2;
            }else{
                if (temp == B){
                    res += "B";
                }else{
                    res += "G";
                }
                j++;
            }
        }
        i++;
    }
    cout << res;
}