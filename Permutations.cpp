//Permutations.cpp -- The purpose of this file is to *********
//CSIS 111-B02
//YouTube. (2017). Permutations and Combinations Tutorial. YouTube. Retrieved January 23, 2022, from https://www.youtube.com/watch?v=XJnIdRXUi7A.

//Include statements
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

//Global declarations: Constants and type definitions only -- no variables

//Function prototypes

int main()
{
    //In cout statement below substitute your name and lab number
    cout << "Martin Barrios -- Lab#2" << endl
         << endl;

    //Variable declarations
    // here I declare my variables for the set number given in the instructions
    double n = 18.0;
    double r = 3.0;
    // I also define some helpful variables to help make things easier
    double t = n - r;
    double amountOfTeams;
    double rFact;
    double nFact;
    double tFact;
    //Program logic
    // Here I use the formula to get the factorial of the numbers
    nFact = pow(M_E, -n) * pow(n, n) * sqrt(2 * M_PI * n);
    rFact = pow(M_E, -r) * pow(r, r) * sqrt(2 * M_PI * r);
    tFact = pow(M_E, -t) * pow(t, t) * sqrt(2 * M_PI * t);
    // amountOfTeams has the factorials plugged in and uses the formula to find the number of combinations. 
    amountOfTeams = nFact / (rFact * tFact);
    // lastly I output the result of amountOfTeams
    cout << amountOfTeams << endl;

    //Closing program statements
    system("pause");
    return 0;
}

//Function definitions
