#include<iostream>
using namespace std;
int main() {
    int a = 12, b = 18;
    a = abs(a);
    b = abs(b);
    if (a == 0 && b == 0) {
        cout << "Undefiend";
        return 0;
    }
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout << a;
    return 0;
}