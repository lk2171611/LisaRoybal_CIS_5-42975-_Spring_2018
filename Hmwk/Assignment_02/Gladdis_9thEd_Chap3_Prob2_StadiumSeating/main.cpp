/* 
 * File:   main.cpp
 * Author: Lisa Roybal
 * Created on March 11th, 2018, 8:28 PM
 * Purpose: Stadium Seating  
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
    int classATicketsSold, classBTicketsSold, classCTicketsSold; //User input
    double income; //Output
    double classACost, classBCost, classCCost; //Cost of a ticket
    string questionStart="Please enter the number of Class ";
    string questionEnd=" tickets sold: ";

    //Initial Variables
    cout<<fixed<<showpoint<<setprecision(2);
    classACost = 15;
    classBCost = 12;
    classCCost = 9;
    cout<<questionStart<<"A"<<questionEnd;
    cin>>classATicketsSold;
    cout<<questionStart<<"B"<<questionEnd;
    cin>>classBTicketsSold;
    cout<<questionStart<<"C"<<questionEnd;
    cin>>classCTicketsSold;
    
    //Map/Process Inputs to Outputs
    income = classATicketsSold*classACost+
             classBTicketsSold*classBCost+
             classCTicketsSold*classCCost;
    
    //Display Outputs
    cout<<"Amount of income generated from ticket sales: $"<<income<<endl;
    
    //Exit program!
    return 0;
}