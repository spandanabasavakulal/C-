#include<bits/stdc++.h>
using namespace std;
int main() {
    char op;
    double a, b, res;
    cout<< "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (op == '+') {
        res = a +b;
    }
    else if (op == '-') {
        res = a - b;
    }
    else if (op == '*') {
        res = a * b;
    }
    else if (op == '/') {
        res = a / b;
    }
    else {
        cout << "Error! Operator is not correct";
        res = -DBL_MAX;
    }
    if (res != -DBL_MAX) {
        cout << "Result: " << res;
    }
    return 0;
}