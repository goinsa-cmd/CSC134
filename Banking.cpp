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
    // account information
    string account_name;
    string account_id = "8a21x109PQ0";
    double account_balance = 353.87;
    // account transaction
    double withdraw_amount;
    double deposit_amount;

    //Transaction amount
    cout << "Welcome to LS banks" << endl << "write your account name?" << endl << "Name:";
    cin >> account_name;
    cout << "welcome " << account_name << endl;
    cout << "enter your withdraw amount $" << endl << "Withdraw:";
    cin >> withdraw_amount;
    cout << "enter your deposit amount $" << endl << "Deposit:" ;
    cin >> deposit_amount;
 
    // Display updated account infromation
    cout << fixed << setprecision(2);
    cout << "Transaction results for " << account_name << "(ID:" << account_id << ")" << endl ;
    cout << "previous account balance: " << account_balance <<"$" << endl;
    cout << "Withdraw amount: " << withdraw_amount <<"$" << endl;
    cout << "Deposit amoutn: " << deposit_amount <<"$" << endl;
    account_balance += deposit_amount - withdraw_amount;
    cout << "Current account balance: " << account_balance <<"$" << endl;
    cout << "Thank you. Have a nice day" << endl;
    

return 0;
}