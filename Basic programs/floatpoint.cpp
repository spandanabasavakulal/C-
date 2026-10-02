#include<iostream>
using namespace std;
float mul_floatnumbers(float a, float b) { return a * b;}
int main() {
    float A = 1.2, B = 3.0, product;
    product = mul_floatnumbers(A, B);
    cout << product;
    return 0;
}