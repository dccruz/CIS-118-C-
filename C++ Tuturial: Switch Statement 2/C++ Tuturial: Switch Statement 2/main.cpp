#include <iostream>
using namespace std;

int main() {
    char userInput;
    cin >> userInput;
    cout << userInput << endl;
    
    switch (userInput) {
        case 'a':
            userInput = 'A';
            break;
        case 'b':
            userInput = 'B';
            break;
        case 'c':
            userInput = 'C';
            break;
        default:
//            if nothing above is put in we will output a Z 
            userInput = 'Z';
            break;
    }
    cout << userInput << endl;
    
    
}


