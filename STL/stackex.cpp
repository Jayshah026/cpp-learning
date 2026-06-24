#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    for(int i = 1; i <= 5; i++){
        s.push(i);
    }

    cout << "The top element is : " << s.top() << endl;
    cout << "The size of the stack is : " << s.size() << endl;


    s.pop();


    cout << "\n";
    cout << "After delete one element the result is : " << endl;
    cout << "\n";
    
    
    cout << "The new top element after updating the vlaue : " << s.top() << endl;
    cout << "The new size of the stack after updating the vlaue : " << s.size() << endl;

    // To check whether the stack is empty or not

    cout << s.empty(); 
}