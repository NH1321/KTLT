#include <iostream>

using namespace std;

void rotate(int &x, int &y, int &z)
{
    int tmp = x;
    x = y;
    y = z;
    z = tmp;
}
int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    cout << "Before: " << x << ", " << y << ", " << z << endl;

    rotate(x, y, z);
    cout << "After: " << x << ", " << y << ", " << z;

    return 0;
}