#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << i;
        }
        cout << " " << endl;
    }
    return 0;
}

/*Ok here when i write i = 1 to <= 5 it means that this will print the row wise like this
1
2
3
4
5

Now when i write j = 1 and j <= i it means until or unless the j becomes just like i it will executes forever. Means here
i = 1 then j will execute for 1 time and it will  only prints 1 which is equels to the row number. 

Now when i = 2 then j will execute and try to make just like i form starting 1 so it will executes until it becomes 2 and it 
starts from the 1 so it will become 1 2, When we are executing the j. 

Now what if we will execute i it self?

Now here i = 1 then j = 1 
here i = 2 now there are two numbers and we are executing the i it self in the j loop so it has to execute for 2 times and 
here the i = 2 and we are executing the row number itself then what happens is that j will try to become 2 and will be 
executing 2 time so it will become 2 2 


*/