# What i learn

## Basic
- How to write basic structure of C++ programming which is in basic.cpp.
- Use "cout" to print.
- Use "cin" to take input.
- At the end of the code line use ";".

## Variables 
- Variables are the named objects which can store values in it.


# Important

- Use "<<" with cout.
- Use ">>" with cin.
- Use comments, so that the code looks more readable and understandable.

- There are 4 types of method by which we can initialize value in C++.
  1. int a = 5; // Normal and used everywhere
  2. int a{5}; // Works same as above but it will restrict the conversation
  3. int a = {5};
  4. int a(5);

->  Now here as you can see there are 4 types and we use mainly use first 2 methods because     the First one is basic and works everywhere but the major problem is that if we give        value something like "int a = 5.5;" Then it will convert this into the 5 but it should      not really and that problem is solved using the 2nd method because in this it will not      convert values like this and show error.

-> Now in the 2nd method if we give value and don't use it then the compiler will show an      error but if we use [[maybe_unused]] attribute before the variable that may be will not     be used after initialized then compiler will not show an error which is a solution.  


# Mistakes

- Did not do any mistakes.
