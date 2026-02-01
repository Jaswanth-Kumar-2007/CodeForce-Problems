#include <iostream>
using namespace std;

int main(){
    string f,m,s;
    cin >> f;
    cin >> m;
    cin >> s;
    string res;
    if (f == "paper" && m == "rock" && s == "rock"){
        res = "F";
    }else if (f == "rock" && m == "paper" && s == "rock"){
        res = "M";
    }else if (f == "rock" && m == "rock" && s == "paper"){
        res = "S";
    }else if (f == "scissors" && m == "paper" && s == "paper"){
        res = "F";
    }else if (f == "paper" && m == "scissors" && s == "paper"){
        res = "M";
    }else if (f == "paper" && m == "paper" && s == "scissors"){
        res = "S";
    }else if (f == "rock" && m == "scissors" && s == "scissors"){
        res = "F";
    }else if (f == "scissors" && m == "rock" && s == "scissors"){
        res = "M";
    }else if (f == "scissors" && m == "scissors" && s == "rock"){
        res = "S";
    }else{
        res = "?";
    }
    cout << res;
}