# Functions in C++

```C++
A function is a reusable block of code that performs a specific task.

Functions help in:

- Making code modular
- Reusing code
- Improving readability
- Simplifying debugging
- Breaking large problems into smaller parts

In DSA, functions are heavily used to divide complex problems into manageable pieces and avoid code repetition.
```

# What is a Function?

```C++
A function is a block of code that performs a specific task whenever it is called.

Syntax:

return_type function_name(parameters)
{
    // Function body
}

Example:

#include <iostream>
using namespace std;

void greet() {
    cout << "Hello";
}

int main() {
    greet();
    return 0;
}

Output:

Hello
```

# Function Declaration vs Definition

## Function Declaration (Prototype)

```C++
A function declaration tells the compiler that a function exists somewhere in the program.

Syntax:

return_type function_name(parameters);

Example:

int add(int, int);

Notice the semicolon (;) at the end.

A declaration contains:

- Return type
- Function name
- Parameter types

It does not contain the implementation.
```

## Function Definition

```C++
A function definition contains the actual implementation of the function.

Example:

int add(int a, int b) {
    return a + b;
}
```

# Return Types

```C++
The return type specifies what value a function sends back.

Common return types:

int
float
double
char
bool
string
void

Examples:

int getAge() {
    return 20;
}

double getPI() {
    return 3.14;
}

char getGrade() {
    return 'A';
}
```

## Returning Nothing (void)

```C++
Some functions only perform an action and do not return anything.

Example:

void printHello() {
    cout << "Hello";
}

void means that the function does not return any value.
```

# Parameters and Arguments

## Parameters

```C++
Variables written inside the function definition are called parameters.

Example:

void greet(string name)

Here:

string name

is a parameter.

Parameters act as placeholders that receive values when the function is called.
```

## Arguments

```C++
Actual values passed while calling a function are called arguments.

Example:

greet("Jay");

Here:

"Jay"

is an argument.

Example:

#include <iostream>
using namespace std;

void greet(string name) {
    cout << "Hello " << name << endl;
}

int main() {
    greet("Jay");
    greet("Rahul");
    greet("Priya");
}

Output:

Hello Jay
Hello Rahul
Hello Priya
```

## Multiple Parameters

```C++
A function can take multiple parameters.

Example:

int add(int a, int b) {
    return a + b;
}

int main() {
    cout << add(10, 20);
}

Output:

30
```

# Pass by Value

```C++
By default, C++ uses pass by value.

In pass by value, a copy of the original variable is passed to the function.

Changes made inside the function do not affect the original variable.

Example:

#include <iostream>
using namespace std;

void increase(int x) {
    x = x + 10;
    cout << "Inside function: " << x << endl;
}

int main() {
    int num = 5;

    increase(num);

    cout << "Inside main: " << num << endl;
}

Output:

Inside function: 15
Inside main: 5

Changing x will not affect the original variable.

```

# Pass by Reference

```C++
Pass by reference allows a function to directly access and modify the original variable. 
Means here the original variable changes instead making a copy of it.

Syntax:

void functionName(data_type &variable)

The & symbol makes the parameter a reference.

No copy is created.

Example:

#include <iostream>
using namespace std;

void increase(int &x) {
    x = x + 10;
}

int main() {
    int num = 5;

    increase(num);

    cout << num;
}

Output:

15

Changing x also changes num.
```

## Pass by Value vs Pass by Reference

```C++
+---------------------------+----------------------+------------------+
| Feature                   | Pass by Value        | Pass by Reference|
+---------------------------+----------------------+------------------+
| Copy Created              | Yes                  | No               |
| Original Variable Changes | No                   | Yes              |
| Memory Usage              | More                 | Less             |
| Performance               | Slower for large data| Faster           |
+---------------------------+----------------------+------------------+
```

# Pass by Pointer

```C++
Before references were introduced, pointers were commonly used to modify variables inside functions.

In pass by pointer, the address of the variable is passed.

Example:

#include <iostream>
using namespace std;

void change(int *ptr) {
    *ptr = 100;
}

int main() {
    int x = 20;

    change(&x);

    cout << x;
}

Output:

100

Explanation:

&x

returns the address of x.

int *ptr

means ptr is a pointer variable that stores an address.

*ptr

means access the value stored at that address.

* Example

int num = 5;

int *p = &num;

cout << p << endl;   // Prints address
cout << *p << endl;  // Prints value stored at that address

Output:

0x61ff08    // Example address
5
```

# Default Arguments

```C++
Default arguments allow functions to use predefined values when no arguments are provided.

Example:

#include <iostream>
using namespace std;

void greet(string name = "Guest") {
    cout << "Hello " << name;
}

int main() {
    greet("Jay");
    cout << endl;
    greet();
}

Output:

Hello Jay
Hello Guest

* Example

int add(int a, int b = 10) {
    return a + b;
}

int main() {
    cout << add(5) << endl;
    cout << add(5, 20);
}

Output:

15
25
```

## Rules of Default Arguments

```C++
Default arguments must be provided from right to left.

Correct:

void func(int a, int b = 10, int c = 20);

Incorrect:

void func(int a = 10, int b, int c = 20);

Reason:

Once a parameter is given a default value, all parameters to its right must also have default values.
```

# Function Overloading

```C++
Function overloading allows multiple functions to have the same name but different parameter lists.

The compiler distinguishes functions based on:

- Number of parameters
- Type of parameters
- Order of parameter types

Example:

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    cout << add(2, 3) << endl;
    cout << add(2, 3, 4) << endl;
    cout << add(2.5, 3.5);
}

Output:

5
9
6
```

## Invalid Overloading

```C++
Changing only the return type is not considered function overloading.

Incorrect:

int sum(int a, int b) {
    return a + b;
}

double sum(int a, int b) {
    return a + b;
}

This produces a compiler error because both functions have identical parameter lists.
```

# Variable Scope

```C++
Scope refers to the region of the program where a variable can be accessed.

Types of scope:

1. Local Scope
2. Global Scope
```

## Local Variables

```C++
Variables declared inside a function or block are called local variables.

Example:

void test() {
    int x = 10;
    cout << x;
}

x can only be accessed inside test().

Incorrect:

void test() {
    int x = 10;
}

int main() {
    cout << x;   // Error
}
```

## Global Variables

```C++
Variables declared outside all functions are called global variables.
They can be accessed anywhere throughout the program.

Example:

#include <iostream>
using namespace std;

int x = 100;

void test() {
    cout << x << endl;
}

int main() {
    cout << x << endl;
    test();
}

Output:

100
100

Global variables can be accessed by all functions.
```

# Variable Lifetime

## Local Variable Lifetime

```C++
Local variables are created when a function starts execution and destroyed when the function ends.

Example:

void test() {
    int x = 10;
}

x exists only during the execution of test().
```

## Global Variable Lifetime

```C++
Global variables are created when the program starts and destroyed when the program ends.

Example:

int g = 50;

g remains alive throughout the entire execution of the program.
```

# Variable Shadowing

```C++
Variable shadowing occurs when a local variable has the same name as a global variable.

The local variable hides the global variable inside its scope.

Example:

#include <iostream>
using namespace std;

int x = 100;

int main() {
    int x = 10;

    cout << x;
}

Output:

10

The local variable takes priority.
```

## Accessing Global Variable using Scope Resolution Operator

```C++
The scope resolution operator (::) is used to access the global variable when a local variable with the same name exists.

Example:

#include <iostream>
using namespace std;

int x = 100;

int main() {
    int x = 10;

    cout << x << endl;     // Local variable
    cout << ::x << endl;   // Global variable
}

Output:

10
100
```
