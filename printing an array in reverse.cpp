//EXPERIMENT-7
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3
#include <iostream>
using namespace std;

int main() {
    string str;
    cout<<"Enter a string:"<<endl;
    cin>>str;
    
    for(int i=str.length() - 1;i>=0;i--){
        cout<<str[i];
    }

    return 0;
}


/*
Output:-
Enter a string:
coding_in_C++
++C_ni_gnidoc
*/
