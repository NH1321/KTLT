#include <iostream>
using namespace std;

void reversearray(int arr[], int size)
{
    int l = 0, r = size - 1, tmp;
    while(l<r){
        tmp = arr[l];
        arr[l] = arr[r];
        arr[r] = tmp;
        l++;
        r--;
    }
}
void ptr_reversearray(int *arr, int size)
{
    int l = 0, r = size - 1, tmp;
    while(l<r){
        tmp = *(arr + l);
        *(arr + l) = *(arr + r);
        *(arr + r) = tmp;
        l++;
        r--;
    }
}

int main()
{
    int arr[] = {1, 0, 3, 15, 80, 6, 7, 8, 9};
    ptr_reversearray(arr, 9);
    for(int i=0; i<9; i++)
        cout << arr[i] << " ";
    return 0;
}