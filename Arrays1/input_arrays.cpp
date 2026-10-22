#include <iostream>
using namespace std;

int main(){
    int len;
    cout << "enter the length of array : ";
    cin >> len;

    int arr[len];
    // int len=sizeof(arr)/sizeof(int);

    for(int idx=0;idx<=len-1 ;idx++){ //idx<=len-1 OR idx<len 
    cin>>arr[idx];
    }


    for(int idx=0;idx<=len-1 ;idx++){ //idx<=len-1 OR idx<len 
    cout<<arr[idx]<<" , ";
    }
    cout << endl;
    return 0;

}