/*
 CSC 134 
 M2T1: Apple Sales
 Aaron Goins 
 Date: september 21, 2025
*/

#include <iostream> 
using namespace std;

int main()
{
    // The cost to buy bananas per pound
    string item_name = "banana";
    string shop_name = "The banana tree";
    double price_of_item = .75;
    int items_bought = 0;
    string first_name;
    string last_name;
    string full_name;



    // Greetings
    cout << "Welcome to " << shop_name << " store!" << endl; 
    cout << "Write your first name here : ";
    cin >> first_name;
    cout << "Please state your last name as well: ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Welcome " << full_name + "!" << endl;


    // calculating price
    cout << "The price of one " << item_name << " is " << price_of_item << "$" << endl;
    cout << "How many " << item_name << " would you like to purchase?";
    cin >> items_bought;
    double total_cost = items_bought * price_of_item;

    cout << "For purchasing " << items_bought << " " <<  item_name << ", your total is $" << total_cost << endl;  
    cout << "Thank you. Have a nice day" << endl;




    return 0;
}
