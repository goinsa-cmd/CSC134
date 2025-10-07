/*
CSC 134
M2HW1 - Silver
Name: Aaron Goins
Date: 10/6/2025
*/

#include <iostream> 
#include <iomanip> 
using namespace std;


int main()
{
    int pizza_amount;
    int slices_per_pizza;
    int visitors;
    cout << "print the corresponding number for each variable." << endl;
    cout << "Pizza amount: ";
    cin >> pizza_amount;
    cout << "slices per pizza: ";
    cin >> slices_per_pizza;
    cout << "Number of visitors: ";
    cin >> visitors;

    //Calculation for 
    double slices_remaning = pizza_amount*slices_per_pizza-visitors*3;
    cout << "You have " << slices_remaning << " number of pizza slices left." << endl;

return 0;
}