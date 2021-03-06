/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 4th, 2019, 12:20 PM
 * Purpose:  Monty Hall Simulation
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random number functino
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int prize,cntstnt,dropn,nGames;
    int win;
    
    //Initialize the number of Games to play
    cout<<"This is a Monty Hall Simulation"<<endl;
    cout<<"How many Games would you like to play"<<endl;
    cin>>nGames;
    
    //Loop on the number of Games
    for(int game=1;game<=nGames;game++){
        //Initialize or input i.e. set variable values
        prize  =rand()%3+1;//[1,2,3]
        cntstnt=rand()%3+1;//[1,2,3]

        //Choose door to open
        do{
            dropn=rand()%3+1;//[1,2,3]
        }while(dropn==prize||dropn==cntstnt);
        win+=cntstnt==prize?true:false;
    }
    //Output How Many Wins and Losses
    cout<<"Total Number of Games Played = "<<nGames<<endl;
    cout<<"Total Number of Games Won    =  "<<win<<endl;
    cout<<"Total Number of Games Lost   =  "<<nGames-win<<endl;

    //Exit stage right or left!
    return 0;
}