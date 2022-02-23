// Ryan Bieker, CS 3060 001, Chapter 5 Programming Challenges, due 2/22/2022, 
//calculates the population of organisms based on given population size, increasing rate, and days passed

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //calculation vars
    double startPop;
    double avgInc;
    int days;

    //starting organisms
    cout << "Enter the starting of num organisms: ";
    cin >> startPop;
    
    //currentPop set to be used in calculation
    double currentPop = startPop;

    //daily increase
    cout << "Enter the average daily population increase (as a percentage): ";
    cin >> avgInc;
    avgInc += 1;
    //days multiplied
    cout << "Enter the number of days they will multiply: ";
    cin >> days;

    //display each day and population size
    for (int i = 1; i <= days; i++)
    {
        currentPop *= avgInc;
        cout << "On day " << i << " the population size was " << setprecision(2) << currentPop << "." << endl;
    }
}
