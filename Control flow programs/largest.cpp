#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 2, c = 11;
    if (a >= b) {
        if (a >= c)
            cout << a;
        else
            cout << c;
    }
    else {
        if (b >= c)
            cout << b;
        else
            cout << c;
    }
    return 0;
}