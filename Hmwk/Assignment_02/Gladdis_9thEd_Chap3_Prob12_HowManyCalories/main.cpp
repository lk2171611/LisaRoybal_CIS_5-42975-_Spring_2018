/* 
 * File:   main.cpp
 * Author: Lisa Roybal
 * Created on March 11th, 2018, 5:46 PM
 * Purpose: How Many Calories? 
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
    int numCookiesAte; //User input
    double totalCalories; //Output
    int numCookiesInBag; //Number of cookies in a bag
    int calPerServing; //Number of calories in serving
    int numOfServings; //Number of servings in bag
    int calPerCookie; // Number of calories in a cookie

    //Initial Variables
    //cout<<fixed<<setprecision(0);
    numCookiesInBag=30;
    calPerServing=240;
    numOfServings=10;
    calPerCookie=calPerServing/(numCookiesInBag/numOfServings);
    cout<<"Please enter the number of cookies eaten: ";
    cin>>numCookiesAte;
    
    //Map/Process Inputs to Outputs
    totalCalories=numCookiesAte*calPerCookie;
    
    //Display Outputs
    cout<<"Number of calories consumed: "<<totalCalories<<endl;
    
    //Exit program!
    return 0;
}