/* 
 * File:   main.cpp
 * Author: Lisa Roybal
 * Created on March 12th, 2018, 8:37 PM
 * Purpose: Vacation Days  
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cmath>    //ceiling function
#include <string>
#include <iomanip>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int numDays; //User input
    int numHours, numMins, numSeconds; //Output
    const int HOURS_CONV=24;
    const int MINS_CONV=60;
    const int SECONDS_CONV=60;

    //Initial Variables
    cout<<"Please enter the number of whole days you plan to spend on your next vacation: ";
    cin>>numDays;
    
    //Map/Process Inputs to Outputs
    numHours=numDays*HOURS_CONV;
    numMins=numHours*MINS_CONV;
    numSeconds=numMins*SECONDS_CONV;
    
    //Display Outputs
    cout<<"Number of Hours on Vacation: "<<numHours<<endl;
    cout<<"Number of Minutes on Vacation: "<<numMins<<endl;
    cout<<"Number of Seconds on Vacation: "<<numSeconds<<endl;
    
    //Exit program!
    return 0;
}