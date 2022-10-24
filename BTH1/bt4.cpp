#include <iostream>
using namespace std;

int counteven(int *arr, int size)
{
    int count = 0;
    for(int i = 0; i<size; i++){
        if(*(arr+i)%2==0) count++;
    }
    return count;
}

int main()
{
    int arr[]={1, 2, 3, 4, 5, 6, 7, 8};
    cout<<"So luong so chan trong mang la: "<<counteven(arr, 8);
    return 0;
}