//EXPERIMENT-7
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3
#include <iostream>
using namespace std;

int main() {
    string str1;
    cout << "Enter the string:" << endl;
    cin >> str1;

    int len = str1.length();
    int i;

    for (i = 0; i < len / 2; i++) {
        if (str1[i] != str1[len - i - 1]) {
            break;  
        }
    }

    if (i == len / 2) {
        cout << str1 << " is a palindrome." << endl;
    } else {
        cout << str1 << " is not a palindrome." << endl;
    }

    return 0;
}


/*Output:-
Enter the string:
racecar
racecar is a palindrome.
*/
