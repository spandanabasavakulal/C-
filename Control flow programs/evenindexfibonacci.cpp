#include <iostream>
using namespace std;

long long calculateEvenIndexSum(int n) {
    if (n < 0)
        return 0;

    long long prev2 = 0;
    long long prev1 = 1;
    long long sum = 0;

    // F(0) is an even-indexed Fibonacci number.
    sum = prev2;

    for (int i = 2; i <= 2 * n; i++) {
        long long curr = prev1 + prev2;

        if (i % 2 == 0)
            sum += curr;

        prev2 = prev1;
        prev1 = curr;
    }

    return sum;
}

int main() {
    int n = 8;

    cout << "Sum of Fibonacci numbers at even indexes up to "
         << 2 * n << " is "
         << calculateEvenIndexSum(n);

    return 0;
}