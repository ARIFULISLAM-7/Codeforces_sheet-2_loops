#include <iostream>
int main () {
    int num, rev = 0, org, rem;
    std:: cin >> num;
    org = num;
    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    std:: cout << rev << std:: endl;
    if (org == rev) {
        std:: cout << "YES";
    } else {
        std:: cout << "NO";
    }
    return 0;
}