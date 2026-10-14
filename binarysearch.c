#include <stdio.h>
int binary_search(int[],int,int,int);
int main(){
    int arr[] = {101,103,107,109,113,117,119};
    int n, start = 0, end = (sizeof(arr)/sizeof(int))-1;
    printf("Enter the number you're looking for : ");
    scanf("%d",&n);

    int index = binary_search(arr,start,end,n);
    if (index<0) printf("The number %d is not there in array",n);
    else printf("The number %d is present at index %d in the array,",n,index);
}
int binary_search(int arr[],int start,int end, int n){

    while(start<=end){
        int mid = (start+end)/2;
        if (n == arr[mid]) return mid;
        else if (n > arr[mid]){
             return binary_search(arr,mid+1,end,n);
        }
        else{
            return binary_search(arr,start,mid-1,n);
        }
    }
    return -1;
}