#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout << "Enter the Length of array : ";
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout << "Enter the " << i+1 <<"th element(ascending order sort) : ";
        cin >> arr[i];
    }

    int start = 0;
    int end = n-1;

    int x;
    cout << "Enter the Element you want to find index of : ";
    cin >> x;

    while (start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==x){
            cout << mid;
            return 0;
        }
        else if(arr[mid]>x){
            end = mid-1;
        }
        else{
            start = mid +1;
        }
    }

    cout << "Element not found";

return 0;
}