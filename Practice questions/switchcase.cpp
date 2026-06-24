#include<iostream>
using namespace std;

int main(){
    int day;
    cout << "Choose num between(1-7)";
    cin >> day; 

    switch(day){
        case 1 : 
        cout << "Monday";
        break;

        case 2 : 
        cout << "Tuseday";
        break;

        case 3 : 
        cout << "Wednesday";
        break;

        case 4 : 
        cout << "Thrseday";
        break;

        case 5 : 
        cout << "Firday";
        break;

        case 6 : 
        cout << "Saturday";
        break;

        case 7 : 
        cout << "Sunday";
        break;

        default :
        cout << "Invalid statement";
    }
    return 0;
}