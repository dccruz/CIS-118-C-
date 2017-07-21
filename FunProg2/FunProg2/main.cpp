//#include <string>
//#include <iostream>
//
//int FindName(std::string* names, std::string name, int size) {
//    for (int i = 0; i < size; i++) {
//        if(names[i] == name)
//            return i;
//    }
//    
//    return size;
//}
//
//void PrintNames(std::string* names, int size) {
//    for (int i = 0; i < size; i++) {
//        std::cout << names[i] << std::endl;
//    }
//}
//
//
//void DeleteName(std::string* names, std::string name, int size) {
//    if(FindName(names, name, size) == size)
//        return;
//    
//    for (int i = 0; i < size; i++) {
//        if(names[i] == name)
//            names[i] = "\0";
//    }
//}


//
//
//int main()
//{
//    std::string firstNameArray[7];
//    
//    firstNameArray[0] = "Jim";
//    firstNameArray[1] = "Tuyet";
//    firstNameArray[2] = "Ann";
//    firstNameArray[3] = "Roberto";
//    firstNameArray[4] = "Crystal";
//    firstNameArray[5] = "Valla";
//    firstNameArray[6] = "Mathilda";
//    
//    int index = FindName(firstNameArray, "Ann", 7);
//    
//    if(index == 7)
//        std::cout << "Name not found" << std::endl;
//    else
//        std::cout << std::to_string(index) << std::endl;
//    
//    PrintNames(firstNameArray, 7);
//    DeleteName(firstNameArray, "Ann", 7);
//    
//    std::cout << "\n";
//    
//    PrintNames(firstNameArray, 7);
//    
//    ::getchar();
//    return 0;
//}



//Consider these Notes:
//
//No need for & in the function prototype as a pointer to the first element in the array will be passed
//You should assign the function to a variable to save the returned value: ex: pos = searchArray(name, firstNameArray);
//No [] needed in the function call.
//You have to add output for the search result.
//Again no need for the reference in the array parameter, i.e. No & needed.
//in position == firstNameArray[i]; you should use = not ==.
//You should initialize position with a value other than 0 to ARR_SIZE.
//There should not be else statement inside searchArray.
//compare your code to this working code:

//#include <iostream>
//using namespace std;
//
//int searchArray(string , string [], int);
//
//int main()
//{
//    const int ARR_SIZE = 7;
//    
//    string firstNameArray[ARR_SIZE] = { "Jim", "Tuyet", "Ann", "Roberto",
//        "Crystal", "Valla", "Mathilda" };
//    string name = "";
//    cout << "\n What's your name? ";
//    getline(cin, name);
//    
//    int pos = searchArray(name, firstNameArray, ARR_SIZE);
//    
//    if (pos == -1)
//        cout << "\n Not Found!";
//    else
//        cout << "\n Fount at position " << pos;
//    
//    cout << "\n\n\n";
//    
//    return 0;
//}
//
//int searchArray(string name, string fNameArray[],const int SIZE) {
//    
//    int position = -1;
//    
//    for (int i = 0; i < SIZE; i++)
//        if (fNameArray[i] == name)
//            position = i;
//    
//    return position;
//}



//#include "stdafx.h"

#include <string>
#include <iostream>
using namespace std;
int FindName(string* names, string name, int size) {
    for (int i = 0; i < size; i++) {
        if(names[i] == name)
            return i;
    }
    
    return size;
}

void PrintNames(string* names, int size) {
    for (int i = 0; i < size; i++) {
        cout << names[i] << endl;
    }
}

void DeleteName(string* names, string name, int size) {
    if(FindName(names, name, size) == size)
        return;
    for (int i = 0; i < size; i++) {
        if(names[i] == name)
            names[i] = "\0";
    }
}


int main()
{
    cout << "DC Cruz July 14th 2017 " << endl;
    string firstNameArray[7];
    firstNameArray[0] = "Jim";
    firstNameArray[1] = "Tuyet";
    firstNameArray[2] = "Ann";
    firstNameArray[3] = "Roberto";
    firstNameArray[4] = "Crystal";
    firstNameArray[5] = "Valla";
    firstNameArray[6] = "Mathilda";
    
    int index = FindName(firstNameArray, "Ann", 7);
    if(index == 7)
        cout << "Name not found" << endl;
    else
        cout << to_string(index) << endl;
    PrintNames(firstNameArray, 7);
    DeleteName(firstNameArray, "Ann", 7);
    cout << "\n";
    PrintNames(firstNameArray, 7);
    getchar();
    return 0;
}

