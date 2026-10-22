//my approach for maxsumSubarray for only positive numbers
#include <iostream>
using namespace std;

int main(){
    int arr[] ={100,7,6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(int);
    int sum = 0;
    int sum2 = 0;


    for (int i=0;i<n;i++){
     sum = arr[i]; 
    sum2 = sum+sum2;
    }
    cout << sum2;


    
    return 0;
}