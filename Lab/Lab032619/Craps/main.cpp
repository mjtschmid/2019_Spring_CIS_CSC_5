/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 26th, 2019, 10:30 AM
 * Purpose:  Play Craps and take Stats
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Function
#include <ctime>     //Time function
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
    int wins;//Number of wins
    int lose;//Number of losses
    int nGames;//How many Games played
    
    //Initialize or input i.e. set variable values
    wins=lose=0;
    nGames=36000;
    
    //Loop on playing the game
    for(int game=1;game<=nGames;game++){
        char die1=rand()%6+1;//[1,6]
        char die2=rand()%6+1;//[1,6]
        char sum=die1+die2;
        if(sum==7||sum==11)wins++;
        else if(sum==2||sum==3||sum==12)lose++;
        else{
            bool rollAgn;
            do{
                die1=rand()%6+1;//[1,6]
                die2=rand()%6+1;//[1,6]
                char sumAgn=die1+die2;
                if(sumAgn==7){lose++;rollAgn=false;}
                else if(sum==sumAgn){wins++;rollAgn=false;}
                else rollAgn=true;
            }while(rollAgn);
        }
 
    }
    
    //Display the Results
    cout<<"Total Number of Games  = "<<nGames<<endl;
    cout<<"Total Number of Wins   = "<<wins<<endl;
    cout<<"Total Number of Losses = "<<lose<<endl;
    cout<<"Total Number of Games  = "<<wins+lose<<endl;

    //Exit stage right or left!
    return 0;
}