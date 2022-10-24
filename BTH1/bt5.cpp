#include <iostream>
using namespace std;

double *maximum(double *a, int size)
{
    double *max;
    max = a;
    if (a == NULL)
        return NULL;
    for (int i = 1; i < size; i++)
    {
        if (*max < a[i])
            max = &a[i];
    }
    return max;
}

int main()
{
    double a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << "Gia tri lon nhat la: " << *maximum(a, 8);
    return 0;
}