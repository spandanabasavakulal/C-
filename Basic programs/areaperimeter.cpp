#include<iostream>
using namespace std;
int areaRectangle(int a, int b)
{
    int area = a * b;
    return area;
}
int perimeterRectangle(int a, int b)
{
    int perimeter = 2*(a+b);
    return perimeter;
}
int main()
{
    int a = 5;
    int b = 6;
    cout << "Area = " << areaRectangle(a, b) << endl;
    cout << "Perimeter = " << perimeterRectangle(a, b);
    return 0;
}
