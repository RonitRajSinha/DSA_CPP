#include<iostream>
using namespace std;
int main(){
    int x=5,y=10;
    int *ptr1=&x, *ptr2=&y;
    cout << ptr2 << "\n";
    cout << ptr1 << "\n";
    cout << *ptr1 << "\n";
    cout << *ptr2 << "\n";
    ptr2=ptr1;
    cout << ptr2 << "\n";
    cout << ptr1 << "\n";
    cout << *ptr1 << "\n";
    cout << *ptr2 << "\n";
    return 0;
}