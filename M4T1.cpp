// CSC 134
// M4T1 - While
// Aaron Goins
// 10/20/2025


#include <iostream>
using namespace std;
  
int main()
{

    // 5-3
    cout << "5-3" << endl;
    int num = 0;
    while (num < 5) {
        cout << "Hello\n";
        num++;
    }
    cout << "That's all!\n";

    cout << "5-6" << endl << endl;

    cout << "Number vs Number Squared" << endl;
    cout << "*------------------------*" << endl;
    num = 0;
    while(num < 10){
        cout << num << "\t" << num*num << endl;
        num++;
    }

    return 0; // done
}