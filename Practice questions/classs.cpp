#include<iostream>
using namespace std;

class Animal{
public:
    int age;
    int marks;

    Animal(int a, int marks){
        age = a;
        this->marks = marks;
        cout << "The age is : " << age << "And the marks is : " << marks;
    }

};

int main(){
    Animal(34, 94);
    return 0;
}