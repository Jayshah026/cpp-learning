/*
A school has following rules for grading system:
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
Ask user to enter marks and print thecorresponding grade.
*/

#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter a number: ";
    cin >> a;

    if(a >= 80 && a <= 100){
        cout << "Grade: A";
    }
    else if(a >= 60 && a < 80){
        cout << "Grade: B";
    }
    else if(a >= 50 && a < 60){
        cout << "Grade: C";
    }
    else if(a >= 45 && a < 50){
        cout << "Grade: D";
    }
    else if(a >= 25 && a < 45){
        cout << "Grade: E";
    }
    else{
        cout << "Grade: F";
    }
    return 0;
}