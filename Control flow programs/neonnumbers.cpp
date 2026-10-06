#include<iostream>
using namespace std;
bool isNeon(int n) {
    int square = n * n;
    int sum = 0;
    while (square > 0) {
        sum += square % 10;
        square /= 10;
    }
    return sum == n;
}
int main() {
    int n = 10000;
    for (int i = 1; i <= n; i++)
    {
        if (isNeon(i)) {
            cout << i << " ";
        }
    }
    return 0;
}