# Variables

A variable is a named memory location used to store data that can be changed during program execution. Variables make programs dynamic by allowing users to input, modify, and process different values.

## Syntax

```cpp
data_type variable_name = value;

## Example

int age = 20;

cout << age;   // Output: 20

age = 25;

cout << age;   // Output: 25

In the above example:

* `int` is the data type.
* `age` is the variable name.
* `20` and `25` are the values stored in the variable.
```

---

# Data Types

Data types specify the type of data a variable can store. They help the compiler allocate memory efficiently and perform appropriate operations.

## 1. Primitive (Built-in) Data Types

```C++

These are the basic data types provided by C++.

| Data Type   | Description                                  | Example                              |
| ----------- | -------------------------------------------- | ------------------------------------ |
| `int`       | Stores whole numbers                         | `int age = 21;`                      |
| `long long` | Stores very large integers                   | `long long population = 8000000000;` |
| `float`     | Stores decimal numbers with single precision | `float price = 99.99;`               |
| `double`    | Stores decimal numbers with double precision | `double pi = 3.14159;`               |
| `char`      | Stores a single character                    | `char grade = 'A';`                  |
| `bool`      | Stores `true` or `false` values              | `bool isPassed = true;`              |

```

---

## 2. Non-Primitive (Derived/User-Defined) Data Types

```C++

These data types are created using primitive data types or by the programmer.

| Data Type            | Description                             | Example                                     |
| -------------------- | --------------------------------------- | ------------------------------------------- |
| `Array`              | Collection of elements of the same type | `int arr[5] = {1,2,3,4,5};`                 |
| `String`             | Sequence of characters                  | `string name = "Jay";`                      |
| `Pointer`            | Stores the address of another variable  | `int* ptr = &x;`                            |
| `Structure (struct)` | Groups different data types together    | `struct Student { string name; int age; };` |
| `Class`              | Blueprint for creating objects in OOP   | `class Student { };`                        |

