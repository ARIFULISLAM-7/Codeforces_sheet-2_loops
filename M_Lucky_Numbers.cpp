#include <iostream>
using namespace std;

int main () {
    int a, b, count = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        int t = i, lastDigit;
        while (t) {
            lastDigit = t % 10;
            if (lastDigit == 4 || lastDigit == 7) {
                t /= 10;
            } else {
                break;
            }
        }
        if (t == 0) {
            cout << i << " ";
            count++;
        }
    }
    if (count == 0) {
        cout << -1;
    }

    return 0;
}