#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    int *ptr;
    cout<<"Enter three integers: ";
    cin >> x >> y >> z;
    cout<<"\nThe three integers are:\n";
    ptr = &x;
    cout <<"x = "<<*ptr << endl;
    ptr = &y;
    cout <<"y = "<<*ptr << endl;
    ptr = &z;
    cout <<"z = " <<*ptr;
    return 0;
}