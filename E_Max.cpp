#include <iostream>
int main () {
    int n;
    std:: cin >> n;
    int int_max;
    std:: cin >> int_max;
    for (int i = 1; i < n; i++) {
        int num;
        std:: cin >> num;
        if (num > int_max) {
            int_max = num;
        }
    }
    std:: cout << int_max;
    return 0;
}