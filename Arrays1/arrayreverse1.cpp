//REVERSING AN ARRAY WITH EXTRA SPACE
#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6};

    
    int n = sizeof(arr)/sizeof(int);

    // creating a copy array
    int copyArr[n];

    // loop for copying arr elements into copyArr in reversal
    for (int i=0;i<n;i++){
        copyArr[n-1-i] = arr[i];
    }

    //loop for copying copyArr elements int arr so that now the og arr will be reversed
    for (int i=0;i<n;i++){
        arr[i] = copyArr[i];
    }

    //OUTPUT
    cout << "Reversed Array : "; 
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}
