#include <iostream>
int main () {
    int num;
    while (std:: cin >> num) {
        if (num == 1999) {
            std:: cout << "Correct" << std:: endl;
            break;
        } else {
            std:: cout << "Wrong" << std:: endl;
        }
    }
    return 0;
}