/* 
 * File:   main.cpp
 * Author: Lisa Roybal
 * Created on March 12th, 2018, 4:45 PM
 * Purpose: Time Calculator
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
    int numSeconds; //User input
    const int DAY=86400;
    const int HOUR=3600;
    const int MIN=60;

    //Initial Variables
    cout<<"Please enter a number of seconds: ";
    cin>>numSeconds;
    
    //Map/Process Inputs to Outputs
    
    //Display Outputs
    if (numSeconds>=DAY)
        cout<<"Days: "<<numSeconds/DAY<<endl;
    else if (numSeconds>=HOUR)
        cout<<"Hours: "<<numSeconds/HOUR<<endl;
    else if (numSeconds>=MIN)
        cout<<"Minutes: "<<numSeconds/MIN<<endl;
    
    //Exit program!
    return 0;
}