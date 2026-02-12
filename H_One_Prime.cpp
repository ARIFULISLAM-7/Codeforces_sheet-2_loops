#include <iostream>
#include <cmath>
int main () {
    int number;
    std:: cin >> number;
    if (number < 2) {
        std:: cout << "NO";
        return 0;
    }
    if (number == 2) {
        std:: cout << "YES";
        return 0;
    }
    if (number % 2 == 0) {
        std:: cout << "NO";
        return 0;
    }
    for (long long i = 3; i <= sqrt(number); i += 2) {
        if (number % i == 0) {
            std:: cout << "NO";
            return 0;
        }
    }
    std:: cout << "YES";
    return 0;
}