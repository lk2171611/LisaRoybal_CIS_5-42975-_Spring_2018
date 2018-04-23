/* 
 * File:   main.cpp
 * Author: Lisa Roybal
 * Created on April 18, 2018, 10:01 AM
 * Purpose: Mountain! Dice game
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <fstream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns
const int MIN=1;
const int MAX=6;
const char FL_NAME[]="GameStats.dat"; //Character Array Name

//Function Prototypes
void print(int, bool);
void saveResult(int);
int getResult();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int myLoc; //Player location
    int numToss; //Number of times player has thrown dice
    int die; //Player dice roll
    int choice; //How player throws dice
    bool asc; //True=ascending,False=descending
    bool moved,inputOk; //Whether we successfully moved

    //Initial Variables
    myLoc=MIN-1;
    inputOk=asc=true;
    numToss=0;
    
    //Map/Process Inputs to Outputs
    
    //Display Outputs
    srand(static_cast<unsigned int>(time(0)));
    
    print(myLoc, asc);
    while(inputOk)
    {
        cout<<"Enter 1 to throw softly, 2 to throw medium, and 3 to throw hard."<<endl<<"Enter any other number to quit."<<endl;
        cout<<"Strength of throw (1-3): ";
        cin>>choice;
        numToss++;
        moved=false;
        switch(choice)
        {
            case 1:
                die=rand()%6+1;//[1,6]
                break;
            case 2:
                die=rand()%6+1;//Not used
                die=rand()%6+1;//[1,6]
                break;
            case 3:
                die=rand()%6+1;//Not used
                die=rand()%6+1;//Not used
                die=rand()%6+1;//[1,6]
                break;
            default:
                inputOk=false;
        }
        if (inputOk) // Only do stuff if ok
        {
            if (asc)
            {
                if (die==myLoc+1) //Next asc spot ok
                {
                    myLoc++;
                    moved=true;
                }
            }
            else
            {
                if (die==myLoc-1) //Next desc spot ok
                {
                    myLoc--;
                    moved=true;
                }
            }
            if (!asc&&myLoc==MIN) //Finished
            {
                int prev=getResult(); //To print record
                cout<<"You beat the mountain in "<<numToss<<" tosses!"<<endl;
                if (prev>-1)
                    cout<<"Previous Record: "<<prev<<" tosses."<<endl;
                if (prev==-1||numToss<prev)
                    saveResult(numToss);
                return 0;
            }
            //Print player results
            cout<<"You threw a "<<die<<" and ";
            if (moved)
            {
                if (asc) cout<<"moved up the mountain."<<endl;
                else cout<<"moved down the mountain."<<endl;
            }
            else cout<<"stayed in the same location."<<endl;
            print(myLoc, asc); //print mountain

            if (myLoc==MAX && asc)asc=false; //Move to desc
        }
    }
    
    //Exit program!
    return 0;
}

//Prints the mountain and our location
void print(int loc, bool asc)
{
    int oSide=MAX;
    for(int i=MIN-1;i<=MAX;i++)//Top to bottom
    {
        for(int j=MIN-1;j<=MAX;j++)//Left side
        {
            if (j==oSide)
            {
                // Top only printed here
                if ((asc&&j==loc)||(j==loc&&j==MAX)) cout<<"X";
                else if (oSide>=MIN) cout<<oSide;
                else cout<<" ";
            }
            else cout<<" ";
        }
        for(int j=MAX-1;j>=MIN;j--)//Right side
        {
            if (j==oSide)
            {
                if (!asc&&j==loc) cout<<"X";
                else cout<<oSide;
            }
            else cout<<" ";
        }
        oSide--;
        cout<<endl;
    }
}

// Saves the result
void saveResult(int num)
{
    ofstream out; //output file
    out.open(FL_NAME);
    out<<num;
    out.close();
}

// Returns the last saved result
int getResult()
{
    int res; //Result for file
    ifstream in; //File stream
    in.open(FL_NAME, ios::in);
    if (in.is_open())
    {
        in>>res;
        in.close();
        return res;
    }
    return -1;
}