/* 
 * File:   main.cpp
 * Author: Lisa Roybal
 * Created on March 11th, 2018, 10:25 PM
 * Purpose: Housing Costs  
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
    double rentOrMortgage, utilities, phones, cable; //User input
    double totalMonthly, totalAnnual; //Output
    const int MONTHS_IN_YEAR=12; //Months in a year

    //Initial Variables
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Please enter the monthly costs for each of the following"<<endl;
    cout<<"Rent or Mortgage: ";
    cin>>rentOrMortgage;
    cout<<"Utilities: ";
    cin>>utilities;
    cout<<"Phones: ";
    cin>>phones;
    cout<<"Cable: ";
    cin>>cable;
    
    //Map/Process Inputs to Outputs
    totalMonthly=rentOrMortgage+utilities+phones+cable;
    totalAnnual=totalMonthly*MONTHS_IN_YEAR;
    
    //Display Outputs
    cout<<"Total Monthly Expenses: $"<<totalMonthly<<endl;
    cout<<"Total Yearly Expenses: $"<<totalAnnual<<endl;
    
    //Exit program!
    return 0;
}