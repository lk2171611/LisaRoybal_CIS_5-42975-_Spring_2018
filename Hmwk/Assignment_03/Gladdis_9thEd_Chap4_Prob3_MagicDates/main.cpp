/* 
 * File:   main.cpp
 * Author: Lisa Roybal
 * Created on March 11th, 2018, 8:28 PM
 * Purpose: Magic Dates
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
    int month,day,year; //User input
    string result; // Output

    //Initial Variables
    cout<<"Please enter the Month in numeric form: ";
    cin>>month;
    cout<<"Please enter the Day in numeric form: ";
    cin>>day;
    cout<<"Please enter the 2 digit Year in numeric form: ";
    cin>>year;
    
    //Map/Process Inputs to Outputs
    if(month<1||month>12||day<1||day>31||year<0||year>99)
    {
        cout<<"Invalid date entered. Please run the program again."<<endl;
        return 1;
    }
    
    //Display Outputs
    if(month*day==year)
        cout<<month<<"/"<<day<<"/"<<year<<" is magic."<<endl;
    else
        cout<<month<<"/"<<day<<"/"<<year<<" is NOT magic."<<endl;
    
    //Exit program!
    return 0;
}