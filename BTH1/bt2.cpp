#include<iostream>
using namespace std;

int main(){
    int a[7] = {13, -355, 235, 47, 67, 943, 1222};
    cout<<"address of first five elements in memory.\n";
    for (int i=0; i<5;i++) cout<<"a["<<i<<"] \t";
    cout<<endl;
    for(int i=0; i<5; i++){
        cout<<a+i<<endl;
    }
    return 0;
}