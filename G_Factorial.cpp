#include <iostream>
int main () {
    int t;
    std:: cin >> t;
    for (int i = 1; i <= t; i++) {
        int num;
        std:: cin >> num;
        long long result = 1;
        for (int i = num; i >= 1; i--) {
            result *= i;
        }
        std:: cout << result << std:: endl;
    }
    return 0;
}