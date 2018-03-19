/* 
 * File:   main.cpp
 * Author: Lisa Roybal
 * Created on March 11, 2018, 10:01 AM
 * Purpose: Miles Per Gallon 
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cmath>    //ceiling function
#include <string>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    double miles, gallons; //User input
    double mpg; //Output

    //Initial Variables
    cout<<"Please enter the number of gallons of gas the car can hold: ";
    cin>>gallons;
    cout<<"Please enter the number of miles the car can be driven on a full tank: "<<endl;
    cin>>miles;
    
    //Map/Process Inputs to Outputs
    mpg=miles/gallons;
    
    //Display Outputs
    cout<<"The car's MPG is: "<<mpg<<" m/g"<<endl;
    
    //Exit program!
    return 0;
}