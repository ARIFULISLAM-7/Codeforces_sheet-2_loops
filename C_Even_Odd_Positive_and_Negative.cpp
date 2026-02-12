#include <iostream>
int main () {
    int n, x;
    int even = 0, odd = 0, positive = 0, negative = 0;
    std:: cin >> n;
    for (int i = 0; i < n; i++) {
        std:: cin >> x;
        if (x % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        if (x > 0 && x != 0) {
            positive++;
        } else if (x < 0 && x != 0) {
            negative++;
        }
    }
    std:: cout << "Even: " << even << std:: endl;
    std:: cout << "Odd: " << odd << std:: endl;
    std:: cout << "Positive: " << positive << std:: endl;
    std:: cout << "Negative: " << negative << std:: endl;
    return 0;
}