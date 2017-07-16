#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


void instructions();
double input();
char Num_to_Letter(double grade);

int main(void){
    cout << "DC Cruz July 8th 2017"<<endl;
    double grade;
    instructions();
    grade=input();
    printf("Your grade is: %c \n\n", Num_to_Letter(grade));
    return(0);
    }

void instructions(){
    
    printf("Enter your numerical grade between 0 and 100: ");
    }

double input(){
    double grade;
    scanf("%lf", &grade);
    if (grade<0 || grade>100)
        exit(0);
    return(grade);
    }

char Num_to_Letter(double grade){
    char letter_grade = '\0';
    if(grade>=0 && grade<60)
        letter_grade='F';
    if(grade>=60 && grade<70)
        letter_grade='D';
    if(grade>=70 && grade<80)
        letter_grade='C';
    if(grade>=80 && grade<90)
        letter_grade='B';
    if(grade>=90)
        letter_grade='A';
    return(letter_grade);
    }
