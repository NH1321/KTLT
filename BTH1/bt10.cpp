#include <iostream>
using namespace std;

int n;
int **mt1, **mt2;

void allocate_mem()
{
    mt1 = new int *[n];
    mt2 = new int *[n];
    for (int i = 0; i < n; i++)
    {
        mt1[i] = new int[n];
        mt2[i] = new int[n];
    }
}

void input()
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> mt1[i][j];
        }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> mt2[i][j];
        }
    cout << endl;
}

void calculate()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp;
            temp = mt1[i][j] + mt2[i][j];
            cout << temp << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp = 0;
            for (int k = 0; k < n; k++)
            {
                temp += mt1[i][k] * mt2[k][j];
            }
            cout << temp << " ";
        }
        cout << endl;
    }
}

void free_mem()
{
    for (int i = 0; i < n; i++)
    {
        delete[] mt1[i];
        delete[] mt2[i];
    }
    delete[] mt1, mt2;
}

int main()
{
    cin >> n;
    allocate_mem();
    input();
    calculate();
    free_mem();
    return 0;
}