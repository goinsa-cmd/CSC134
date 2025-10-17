/*
CSC 134
M3lab2
Name: Aaron Goins
Date: 10/16/2025

*/
#include <iostream>
#include <string>

using namespace std;



//Creating a program to convert numerical score into a grade equivalent.
int main()
{
double number_grade;
string letter_grade;

//promt for grade
cout << "Enter your numerical grade here:" ;
cin >> number_grade;

// error 
if (cin.fail()){
    cin.clear();
    cout << "Error! Pls enter a valid number" << endl;
    return 0;
}

// Converison 
if (number_grade < 60){
    letter_grade = "f";   
}
else if (number_grade < 70){
 letter_grade = "d"  ; 
}
else if (number_grade < 80){
 letter_grade = "c"  ; 
}
else if (number_grade < 90){
 letter_grade = "b" ;  
}
else{
 letter_grade = "a" ;  
}

//output grade
cout << "your grade is " << letter_grade << endl;


return 0;

}