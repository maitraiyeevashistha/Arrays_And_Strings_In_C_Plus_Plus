//EXPERIMENT-5
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3
#include <iostream>
using namespace std;
int main() {
    int arr[10];
    int x; 
    
    for(int i =0;i<10;i++){
        cout<<"enter the numbers of an array : ";
        cin>>arr[i]; //Taking the input
    }
    cout<<"the array entered is : "<< endl;
    for(int i =0;i<10;i++){
        
        cout<<arr[i]; //Giving the output
        cout<< " ";
    }
    cout<<endl;
    return 0;
}

/* Output :
enter the numbers of an array : 1
enter the numbers of an array : 2
enter the numbers of an array : 3
enter the numbers of an array : 4
enter the numbers of an array : 5
enter the numbers of an array : 6
enter the numbers of an array : 7
enter the numbers of an array : 8
enter the numbers of an array : 9
enter the numbers of an array : 10
the array entered is : 
1 2 3 4 5 6 7 8 9 10 
*/
