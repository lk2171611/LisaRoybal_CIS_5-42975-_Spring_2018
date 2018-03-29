/* 
 * File:   main.cpp
 * Author: Lisa Roybal
 * Created on March 12th, 2018, 12:31 PM
 * Purpose: Change for a Dollar
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
    int numPennies,numNickles,numDimes,numQuarters; //User input
    int total; //Output
    const int PENNY=1;
    const int NICKEL=5;
    const int DIME=10;
    const int QUARTER=25;

    //Initial Variables
    cout<<"Please enter the number of pennies: ";
    cin>>numPennies;
    cout<<"Please enter the number of nickels: ";
    cin>>numNickles;
    cout<<"Please enter the number of dimes: ";
    cin>>numDimes;
    cout<<"Please enter the number of quarters: ";
    cin>>numQuarters;
    
    //Map/Process Inputs to Outputs
    total=numPennies*PENNY+numNickles*NICKEL+numDimes*DIME+numQuarters*QUARTER;
    
    //Display Outputs
    if (total==100)
        cout<<"You win."<<endl;
    else if (total<100)
        cout<<"Amount was less than a dollar."<<endl;
    else
        cout<<"Amount was more than a dollar."<<endl;
    
    //Exit program!
    return 0;
}