First CODE : 

#include<iostream>
using namespace std;

int main(){
    int lastdigit;
    int  n;
    int rev = 0;
    cout << "Enter the number : ";
    cin >> n;

    while(n > 0){
        lastdigit = n % 10;
        n = n / 10;
        rev = (rev * 10) + lastdigit;    
    }
    cout << rev;
    return 0;
}


OUTPUT : 

Enter the number : 123
321



SECOND CODE : 

#include<iostream>
using namespace std;

int main(){
    int lastdigit;
    int  n;
    cout << "Enter the number : ";
    cin >> n;

    cout << "The reverse of the digit is : ";

    while(n > 0){
        lastdigit = n % 10;
        n = n / 10;
        cout << lastdigit;     
    }
    return 0;
}


OUTPUT : 

Enter the number : 12345
The reverse of the digit is : 54321
