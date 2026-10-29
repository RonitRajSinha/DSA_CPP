#include <iostream>
using namespace std;

int main(){

    int num;
    int n = 5;
    cout << "Enter the number : ";
    cin >> num;

    int i = 0;
    int sum = 0;
    int o = 10;
    while(i<=n){
        sum += num/o;
        sum += num;
        i++;
        
        
        

    }

    cout << sum;





    return 0;
}