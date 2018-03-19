/* 
 * File:   main.cpp
 * Author: Lisa Roybal
 * Created on March 11th, 2018, 1:23 PM
 * Purpose: How Many Widgets?  
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
    double weightOfPallet, weightOfPalletAndWidgets; //User input
    double numWidgets; //Output
    double weightWidget; //Weight of single widget

    //Initial Variables
    cout<<fixed<<setprecision(0);
    weightWidget=12.5;
    cout<<"Please enter the weight in pounds of the pallet alone: ";
    cin>>weightOfPallet;
    cout<<"Please enter the weight in pounds of the pallet with the widgets: ";
    cin>>weightOfPalletAndWidgets;
    
    //Map/Process Inputs to Outputs
    numWidgets=(weightOfPalletAndWidgets-weightOfPallet)/weightWidget;
    
    //Display Outputs
    cout<<"Number of widgets: "<<numWidgets<<endl;
    
    //Exit program!
    return 0;
}