#include<iostream>
using namespace std;

int count = 0;

void function(){
    if(count == 4){
        return;
    }else{
        cout << count << endl;
        count++;
    }

    function();
}

int main(){
    function();
    return 0;
}


/*
OUTPUT : 

0
1
2
3
*/