

/*
 CSC 134 
 M2T2: receipt calculator
 Aaron Goins 
 Date: september 30, 2025
*/

#include <iostream> 
#include <iomanip> 
using namespace std;


int main()
{
    //Creates a simple reciept that includes items bought, total price before and after sales tax,

 
    //variables
     string store_name = "plenters";
     string item = "plenter";
     string empty = "               ";
     double item_price = 2.17 ; 
     double sales_tax = .19 ;
     double tax_total;
     double total_price;

    //Greet
    cout << "Welcome to " << store_name  << endl;
    cout << "you have ordered one " + item << endl;
    cout << "-------------------------------------" << endl;
    //Calculate

    tax_total = item_price*sales_tax;
    total_price = item_price + tax_total;


    //Print
    cout << setprecision(2) << fixed;
    cout << item <<  empty.substr(0,empty.length()-item.length()) << item_price << endl;
    cout << "Tax" <<empty.substr(0,empty.length()-3)  << tax_total  << endl;
    cout << "-------------------------------------" << endl;
    cout << "total" << empty.substr(0,empty.length()-5)  << total_price << endl;
    cout << "Have a nice day!" << endl;
    

 
    return 0;
}