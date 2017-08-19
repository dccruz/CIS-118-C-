
#include <iostream>
#include <cmath>

int main () {
    using namespace std;
    int x;
    
    cout << "how many legs do you have?\n" << endl;
    cin>> x;
    
    switch (x) {
        case 1:
            cout << " you are a pirate \n" << endl;
            break;
        case 2:
            cout << " you are human \n" << endl;
            break;
            default:
            cout << " I don't knwo what you are\n" << endl;
            }


}
