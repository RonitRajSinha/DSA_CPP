#include<iostream>
using namespace std;
int main(){

//input the lenght    
int length;
cout << "Enter The Length of the ARRAY : " ;
cin >> length; 
cout <<"\n";

//array created
int arr[length];

//input the elements
for (int i=0;i<length;i++){
    cout << "Enter the " << i+1 << " element : ";
    cin >> arr[i];
}

//output the elements
cout << "\n" << "Elements of the Array are : ";
for(int i=0;i<length;i++){
    cout << arr[i] << ", ";
}

//finding maximum
int maximum=arr[0];
for(int i=0;i<length;i++){
    if (maximum<arr[i]){
        maximum = arr[i];  
    }
}
cout << "\n\n\n" << "The maximum element of the array is " << maximum << "." << "\n";

//finding minimum
int minimum=arr[0];
for(int i=0;i<length;i++){
    if(minimum>arr[i]) {
    minimum = arr[i];  
    }   
}
cout << "The minimum element of the array is " << minimum << ".";



    
return 0;
    }    