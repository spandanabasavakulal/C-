#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a = 15, b = 20;

    int lcm = max(a, b);

    while (lcm % a != 0 || lcm % b != 0)
        lcm++;

    cout << "LCM of " << a << " and " << b << " is "
         << lcm;

    return 0;
}