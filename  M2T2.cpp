

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
     double item_price = 2.17 ; 
     double sales_tax = .19 ;
     double tax_total;
     double total_price;

    //Greet
    cout << "Welcome to " << store_name  << endl;
    cout << "you have orderd one " + item << endl;


    //Calculate

    tax_total = item_price*sales_tax;
    total_price = item_price + tax_total;

    cout << setprecision << fixed;
    cout << total_price << endl << endl;
    

 
    return 0;
}