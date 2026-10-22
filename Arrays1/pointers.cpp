#include<iostream>
using namespace std;
int main(){

    int a = 10;
    int *ptr = &a;
    int **pptr = &ptr;
    cout << a<<"\n";
    cout<<"The Address of a is "<< ptr << "\n";
    cout<<"The Address of the pointer ptr is "<< pptr << "\n";
    cout<<"value of ptr is "<< ptr << "\n";
    cout << &pptr << "\n";
    cout<<sizeof(ptr)<<"\n";
    cout<<sizeof(pptr)<<"\n";
    cout<<sizeof(a)<<"\n";

    
    return 0;

} 