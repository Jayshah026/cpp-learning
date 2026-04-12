# What i learn (All the basics in one folder from loops to conditional statement and all..)

## Basic

- How to write basic structure of C++ programming which is in basic.cpp.
- Use "cout" to print.
- Use "cin" to take input.
- At the end of the code line use ";".

## Data types

- They are the named objects which can store values in it.
- Types of data types :
1. int - Stores integer value.
2. long int - Can store higher value then int.
3. long long int - It can store higher value then long int & int both.
4. float - It can store decimal values.
5. doubel - Same as float but it can store higher value then the double.
6. String - It stores the whole string in it until it breaks with the space.
-> To specific use getline with the String so that it becomes easy to use.
  ex : String str;
       getline(cin, str);
       cout << str;
   - This way the string will be good to go with just one variable declaration. 
7. char - It uses to store single charecter.

## if-else 

- So it's a conditional statement in which we have certain condition to be execute, in order to do that in minimum time and less effort we are using if else         statement.
  
- syntax :
 if (condition){
 // statement
 } else if (condition) {
 // statement
 } else {
 // statement
}

## switch case

- So it's just work as a if-else but in this the syntax is changed and also in this we have to choose a thing to do a specific work.

- Syntax :

// Variable declaration 

switch(Variable name){
  case 1:
  // statement
  break;

  case 2:
  //statement
  break;

  default:
  //statement

  }

## Loops

1. for loop :

- When we have a specific condition to be executed for number of times or multiple times then we are using for loop for that specific problem.

- Syntax :

for(initialization; condition; increment/decrement){
            // statement
    }

2. while loop :

- When we don't know how many times we want to run the loop then we are using while loop

- Syntax :

// Initialization
while(condition){
  //statement
  increment/decrement
  }

3. do while loop

- Same as while loop but when if we want to execute the condition atleast 1 time then we use do while loop.

- Syntax :

//Initialization
do{
  //statement
  increment/decrement
  }while(condition)  
    


# Important

- Use "<<" with cout.
- Use ">>" with cin.
- Use "Using namespace std;", So you don't have to use it again and again in the code you will write.
- If you want to include each and every library then you can just use this "#include<bits/stdc++.h>", It will take all the library you want to use at once.
- Use comments, so that the code looks more readable and understandable.



# Extra

- There are 4 types of method by which we can initialize value in C++.
  1. int a = 5; // Normal and used everywhere
  2. int a{5}; // Works same as above but it will restrict the conversation
  3. int a = {5};
  4. int a(5);

->  Now here as you can see there are 4 types and we use mainly use first 2 methods because     the First one is basic and works everywhere but the major problem is that if we give        value something like "int a = 5.5;" Then it will convert this into the 5 but it should      not really and that problem is solved using the 2nd method because in this it will not      convert values like this and show error.

-> Now in the 2nd method if we give value and don't use it then the compiler will show an      error but if we use [[maybe_unused]] attribute before the variable that may be will not     be used after initialized then compiler will not show an error which is a solution.  



# Mistakes

- Did not do any mistakes.
