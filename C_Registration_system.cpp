#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> freq;

    while (n--) {
        string s;
        cin >> s;

        if (freq[s] == 0) {
            cout << "OK\n";
        } else {
            cout << s << freq[s] << "\n";
        }

        freq[s]++;
    }
    return 0;
}
