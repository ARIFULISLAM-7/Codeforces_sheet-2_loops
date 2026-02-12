#include <iostream>
int main () {
    int n;
    std:: cin >> n;
    if (n < 2) {
        std:: cout << -1;
    } else {
        for (int i = 2; i <= n; i += 2) {
            std:: cout << i << std:: endl;
        }
    }
    return 0;
}