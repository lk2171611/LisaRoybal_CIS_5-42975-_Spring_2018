/* 
 * File:   main.cpp
 * Author: Lisa Roybal
 * Created on March 12th, 2018, 12:31 PM
 * Purpose: Average Rainfall  
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
    double rain1, rain2, rain3; //User input
    string monthName1, monthName2, monthName3; //User input
    double avgRain; //Output
    const double NUMBER_OF_MONTHS=3.0;

    //Initial Variables
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Please enter names and average rainfall for 3 months."<<endl;
    cout<<"Name of Month 1: ";
    cin>>monthName1;
    cout<<"Rainfall in inches for Month 1: ";
    cin>>rain1;
    cout<<"Name of Month 2: ";
    cin>>monthName2;
    cout<<"Rainfall in inches for Month 2: ";
    cin>>rain2;
    cout<<"Name of Month 3: ";
    cin>>monthName3;
    cout<<"Rainfall in inches for Month 3: ";
    cin>>rain3;
    
    //Map/Process Inputs to Outputs
    avgRain=(rain1+rain2+rain3)/NUMBER_OF_MONTHS;
    
    //Display Outputs
    cout<<"The average monthly rainfall for "<<monthName1<<", "<<monthName2<<", and "<<monthName3<<" was "<<avgRain<<" inches."<<endl;
    
    //Exit program!
    return 0;
}