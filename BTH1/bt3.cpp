#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    int *ptr;
    cin >> x >> y >> z;
    cout << "Here are the values of x, y, and z:\n";
    cout << x << " " << y << " " << z << endl;
    cout << "Once again, here are the values of x, y, and z:\n";
    ptr = &x;
    *ptr += 100;
    cout << *ptr << " ";
    ptr = &y;
    *ptr += 100;
    cout << *ptr << " ";
    ptr = &z;
    *ptr += 100;
    cout << *ptr;
    return 0;
}