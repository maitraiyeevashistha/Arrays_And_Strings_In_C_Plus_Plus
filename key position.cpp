//EXPERIMENT-7
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3
#include <iostream>
using namespace std;

int main() {
int marks[6];
int key=99;
cout<<"The marks of student are:"<<endl;

for(int i=0; i<6; i++){
    cin>>marks[i];
}

for(int n=0; n<6; n++){
    cout<<marks[n]<<" ";
}

for(int i =0; i<5;i++){
    if(key==marks[i]){
        cout<<"\nkey found at location:"<<i+1;
        break;
    }
}
   return 0;
}

/*output:-
The marks of student are:
89
98
70
99
66
76
89 98 70 99 66 76 
key found at location:4
*/
