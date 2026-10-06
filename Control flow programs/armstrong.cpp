#include<iostream>
using namespace std;
bool isArmstrong(int n) {
    int original = n;
    int digits = 0;
    int sum = 0;
    int temp = n;
    while (temp > 0 ) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= digit;
        }
        sum += power;
        temp /= 10;
    }
    return sum == original;
}
int main() {
    int n = 153;
    if (isArmstrong(n)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}