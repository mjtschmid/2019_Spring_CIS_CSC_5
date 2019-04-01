/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 12th, 2019, 12:36 PM
 * Purpose:  Take a Score and Grade
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char grade;
    unsigned short score;
 
    //Initialize or input i.e. set variable values
    cout<<"Get a grade by inputting a score"<<endl;
    cout<<"Valid score in range of 0-100"<<endl;
    cin>>score;
    
    //Give the Grade
    if(score>=90)     grade='A';
    else if(score>=80)grade='B';
    else if(score>=70)grade='C';
    else if(score>=60)grade='D';
    else              grade='F';
    
    //Display the outputs
    cout<<"A Score of "<<score<<" = "<<grade<<endl;

    //Exit stage right or left!
    return 0;
}