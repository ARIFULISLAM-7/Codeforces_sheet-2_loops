#include <iostream>
#include <vector>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 0) {
            cout << 0;
        } else {
            while (n) {
                int last_digit = n % 10;
                n /= 10;
                cout << last_digit << " ";
            }
        }
        cout << endl;
    }
    return 0;
}