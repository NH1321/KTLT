#include <iostream>
using namespace std;

int *a;
int n, tmp;

int main()
{
    cout << "Enter the number of elements: ";
    cin >> n;
    a = new int[n];

    for (int i = 0; i < n; i++)
        scanf("%d", a + i);

    cout << "The input array is: \n";
    for (int i = 0; i < n; i++)
        cout << *(a + i) << " ";
    cout << endl;

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (*(a + i) > *(a + j))
            {
                int tmp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = tmp;
            }
        }
    cout << "The sorted array is: \n";
    for (int i = 0; i < n; i++)
    {
        cout << *(a + i) << " ";
    }
    cout << endl;
    delete[] a;
    return 0;
}