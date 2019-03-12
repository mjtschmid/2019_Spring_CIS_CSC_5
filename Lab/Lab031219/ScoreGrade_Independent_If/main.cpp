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
    if(score>=90)          grade='A';
    if(score>=80&&score<90)grade='B';
    if(score>=70&&score<80)grade='C';
    if(score>=60&&score<70)grade='D';
    if(score<60)           grade='F';
    
    //Display the outputs
    cout<<"A Score of "<<score<<" = "<<grade<<endl;

    //Exit stage right or left!
    return 0;
}