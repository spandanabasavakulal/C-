#include<iostream>
using namespace std;
bool isPrime(int n) {
    if (n < 2){
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int a = 1, b = 10;
    for (int i = a; i<= b; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    return 0;
}