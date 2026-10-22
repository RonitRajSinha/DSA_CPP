//REVERSING AN ARRAY WITHOUT ANY EXTRA SPACE (2 POINTER APPROACH)
#include<iostream>
using namespace std;


int main (){
    int arr[] = {1,2,3,4,5,6};

    int n = sizeof(arr)/sizeof(int);

    //loop 
    for (int i=0;i<n/2;i++){
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;

    }

    cout << "Reversed Array : ";
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }


    return 0;
}