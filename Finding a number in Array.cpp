#include <iostream>
using namespace std;
int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int x; 
    cout<<"Enter the number to be found : ";
    cin>>x;
    
    for(int i=0;i<10;i++){
        if (x==arr[i]){
            cout<<"Number found at index : "<<i;
        }
    }
    return 0;
}

/*Output :
Enter the number to be found : 5
Number found at index : 4
*/
