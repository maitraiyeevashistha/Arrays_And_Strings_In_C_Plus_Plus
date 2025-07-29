//EXPERIMENT-7
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3
#include <iostream>
using namespace std;

int main() {
    int n;
    int min;
    int max;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    max=arr[0];
    min=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"The Maximum Number is : "<< max <<endl;
    cout<<"The Minimum Number is : "<< min<<endl;
    
    
    return 0;
}
/*Output 
Enter number of elements: 5
Enter 5 elements:
1 2 3 4 5
The Maximum Number is : 5The Minimum Number is : 1
*/
    
    
    
    
