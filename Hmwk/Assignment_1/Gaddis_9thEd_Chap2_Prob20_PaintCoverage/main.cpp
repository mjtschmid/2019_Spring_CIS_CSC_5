/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 19th, 2019, 11:32 AM
 * Purpose:  Paint Coverage Calculation
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
    float fncHgt,  //Fence Height in Ft
          fncLn,   //Fence Lenght in Ft
          ptCovrg, //Number of ft^2/Gallon
          areaCov; //Area covered in ft^2
    unsigned int numCans;//Number of cans of paint required.
       
    //Initialize or input i.e. set variable values
    fncHgt=6.0e0f; //6ft
    fncLn=1e2f;    //100 ft
    ptCovrg=3.4e2f;//340 ft^2/gallon
    
    //Map inputs -> outputs
    areaCov=2*(2*(fncLn*fncHgt));//Front and Back painted twice
    numCans=areaCov/ptCovrg+1;   //Can't have fractional paint cans
    
    //Display the outputs
    cout<<"Area Covered = "<<areaCov<<" ft^2"<<endl;
    cout<<"The number of Paint Cans required = "<<numCans<<endl;

    //Exit stage right or left!
    return 0;
}