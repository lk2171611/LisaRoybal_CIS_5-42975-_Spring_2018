/* 
 * File:   main.cpp
 * Author: Lisa Roybal
 * Created on March 12th, 2018, 9:16 AM
 * Purpose: Book Club Points
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
    int booksPurchased; //User input
    int points; //Output

    //Initial Variables
    cout<<"Please enter the number of books purchased: "<<endl;
    cin>>booksPurchased;
    
    //Map/Process Inputs to Outputs
    switch(booksPurchased)
    {
        case 0:
            points=0;
            break;
        case 1:
            points=5;
            break;
        case 2:
            points=15;
            break;
        case 3:
            points=30;
        default:
            points=40;
    }
    
    //Display Outputs
    cout<<"You've earned "<<points<<" points."<<endl;
    
    //Exit program!
    return 0;
}