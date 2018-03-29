/* 
 * File:   main.cpp
 * Author: Lisa Roybal
 * Created on March 12th, 2018, 6:25 AM
 * Purpose: Areas of Rectangles
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
    double len1,wid1,len2,wid2; //User input
    double area1,area2; //Output

    //Initial Variables
    cout<<"Please enter the info for the first rectangle"<<endl;
    cout<<"Length: ";
    cin>>len1;
    cout<<"Width: ";
    cin>>wid1;
    cout<<"Please enter the info for the second rectangle"<<endl;
    cout<<"Length: ";
    cin>>len2;
    cout<<"Width: ";
    cin>>wid2;
    
    //Map/Process Inputs to Outputs
    area1=len1*wid1;
    area2=len2*wid2;
    
    //Display Outputs
    if(area1>area2)
        cout<<"The first rectangle has a greater area."<<endl;
    else if(area1<area2)
        cout<<"The second rectangle has a greater area."<<endl;
    else
        cout<<"The rectangles have the same area."<<endl;
    
    //Exit program!
    return 0;
}   