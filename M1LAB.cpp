/*
 CSC 134 
 M1LAB: Apple Sales
 Aaron Goins 
 Date: september 13, 2025
*/

#include <iostream> 
using namespace std;

int main()
{
    // The cost to buy bananas per pound
    string item_name = "banana";
    string shop_name = "The banana tree";
    double price_of_item = .75;
    int number_of_items = 100;
    int items_bought;

    cout << "Welcome to " << shop_name << " store!" << endl; 
    cout << "We currently have " << number_of_items << " " << item_name << "s for sale" << endl;
    cout << "The price of one " << item_name << " is " << price_of_item << "$" << endl;
    cout << "if you want them all, that will cost you " << price_of_item*number_of_items << "$" << endl << endl;




    return 0;
}