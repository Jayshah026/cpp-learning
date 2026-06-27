# Operators in C++

Operators are special symbols used to perform operations on variables and values.

Example:

```cpp
int a = 10;
int b = 5;

cout << a + b; // Output: 15
```

In the above example, `+` is an operator used to add two values.

---

## 1. Arithmetic Operators

```C++

Arithmetic operators are used to perform mathematical calculations.

| Operator | Description         | Example |
| -------- | ------------------- | ------- |
| `+`      | Addition            | `a + b` |
| `-`      | Subtraction         | `a - b` |
| `*`      | Multiplication      | `a * b` |
| `/`      | Division            | `a / b` |
| `%`      | Modulus (Remainder) | `a % b` |

### Example

int a = 10;
int b = 3;

cout << a + b << endl; // 13
cout << a - b << endl; // 7
cout << a * b << endl; // 30
cout << a / b << endl; // 3
cout << a % b << endl; // 1

> **Note:** When both operands are integers, division returns an integer value.
>
> Example:
> cout << 10 / 3; // Output: 3

```

---

## 2. Relational Operators

```C++

Relational operators are used to compare two values. The result is always `true (1)` or `false (0)`.

| Operator | Description              | Example  |
| -------- | ------------------------ | -------- |
| `==`     | Equal to                 | `a == b` |
| `!=`     | Not equal to             | `a != b` |
| `>`      | Greater than             | `a > b`  |
| `<`      | Less than                | `a < b`  |
| `>=`     | Greater than or equal to | `a >= b` |
| `<=`     | Less than or equal to    | `a <= b` |

### Example

int a = 10;
int b = 5;

cout << (a > b); // Output: 1
cout << (a == b); // Output: 0

```
---

## 3. Logical Operators

```C++

Logical operators are used to combine multiple conditions.

| Operator | Description | Example            |              
| -------- | ----------- | ------------------ |  
| `&&`     | Logical AND | `(a > b && b > 0)` |                                   
| `||`     | Logical OR n| `(a > b || b > 10)`|                                    
| `!`      | Logical NOT | `!(a > b)`         |                                   

### Example

int a = 10;
int b = 5;

cout << (a > b && b > 0); // Output: 1
cout << (a < b || b > 0); // Output: 1
cout << !(a > b);         // Output: 0

```
---

## 4. Assignment Operators

```C++

Assignment operators are used to assign and update values of variables.

| Operator | Equivalent To   |
| -------- | --------------- |
| `=`      | `x = value`     |
| `+=`     | `x = x + value` |
| `-=`     | `x = x - value` |
| `*=`     | `x = x * value` |
| `/=`     | `x = x / value` |
| `%=`     | `x = x % value` |

### Example

int x = 10;

x += 5; // x = 15
x -= 3; // x = 12
x *= 2; // x = 24

```
---

## 5. Increment and Decrement Operators

```C++

These operators increase or decrease the value of a variable by `1`.

| Operator | Description |
| -------- | ----------- |
| `++`     | Increment   |
| `--`     | Decrement   |

### Example

int x = 5;

x++;
cout << x; // Output: 6

x--;
cout << x; // Output: 5

```
---

### Pre and Post Increment

```cpp

int x = 5;

cout << ++x; // Output: 6 (Increment first, then use)

x = 5;

cout << x++; // Output: 5 (Use first, then increment)

```
---

## 6. Bitwise Operators

```C++

Bitwise operators perform operations on binary bits.

| Operator | Description |            
| -------- | ----------- |
| `&`      | Bitwise AND |            
| `||`     | Bitwise OR  |
| `^`      | Bitwise XOR |            
| `<<`     | Left Shift  |            
| `>>`     | Right Shift |            

> These operators are important in Bit Manipulation and will be studied in detail later.