#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    for(int i = 10; i <= 15; i++){
        q.push(i);
    }

    cout << "Last elemtent of the queue : "<< q.back() << endl;
    cout << "First element of the queue : " << q.front() << endl;
    cout << "Size of queue : " << q.size() << endl;
    q.pop();

    
    cout << "\n";
    cout << "After updating values : ";
    cout << "\n";


    cout << "Last elemtent of the queue : "<< q.back() << endl;
    cout << "First element of the queue : " << q.front() << endl;
    cout << "Size of queue : " << q.size() << endl;

    return 0;
}