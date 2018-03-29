/* 
 * File:   main.cpp
 * Author: Lisa Roybal
 * Created on March 12th, 2018, 8:37 PM
 * Purpose: Bank Charges
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
    int numChecks; //User input
    float checkCost,total; //Output

    //Initial Variables
    cout<<fixed<<setprecision(2);
    checkCost=0.10;
    cout<<"Please enter the number of checks written during the past month: ";
    cin>>numChecks;
    
    //Map/Process Inputs to Outputs
    if (numChecks<0)
    {
        cout<<"Invalid input."<<endl;
        return 1;
    }
    else if (numChecks>=20&&numChecks<=39)
        checkCost=0.08;
    else if (numChecks>=40&&numChecks<=59)
        checkCost=0.06;
    else if (numChecks>=60)
        checkCost=0.04;
    
    total=checkCost*numChecks;
    
    //Display Outputs
    cout<<"Bank Fees: "<<total<<endl;
    
    //Exit program!
    return 0;
}