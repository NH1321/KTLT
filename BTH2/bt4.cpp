#include <iostream>

using namespace std;

int cube(int x)
{
    return x * x * x;
}

double cube(double b)
{
    return b * b * b;
}

int main()
{
    int n;
    double f;
    cin >> n >> f;

    cout << "Int: " << cube(n) << endl;
    cout << "Double: " << cube(f);

    return 0;
}