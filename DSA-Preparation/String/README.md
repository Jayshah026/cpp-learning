# std::string

```C++ 

C++ provides the std::string class to work with strings more easily.

#include <string>

string name = "Jay";

```
---

## Advantages of std::string

```C++ 

Advantages:

- Dynamic size
- Easier to use
- Built-in functions
- Safer than character arrays
- Easier comparison and manipulation

Example:

string s = "Hello";

s += " World";

cout << s;

Output:

Hello World

```
---

# Core String Operations

## length() and size()

```C++ 

Used to find the number of characters in a string.

Syntax:

s.length()
s.size()

Both functions perform the same task.

Example:

#include <iostream>
using namespace std;

int main()
{
    string s = "Programming";

    cout << s.length() << endl;
    cout << s.size();

    return 0;
}

Output:

11
11

The last valid index of a string is:

s.length() - 1

```
---

## Indexing []

```C++ 

Characters can be accessed using indices.

Syntax:

s[index]

Example:

string s = "Hello";

cout << s[0] << endl;
cout << s[1] << endl;
cout << s[4];

Output:

H
e
o

```
---

### Modifying Characters

```C++ 

Strings in C++ are mutable.

Example:

string s = "Hello";

s[0] = 'Y';

cout << s;

Output:

Yello

```
---

### Important Rule

```C++

Always access indices in the range:

0 <= index < s.length()

Accessing an invalid index using:

s[index]

causes Undefined Behavior.

```
---

### substr() - Extracting Substrings

```C++ 

substr() is used to extract a portion of a string.

Syntax:

s.substr(start_index, length)

Example:

string s = "Programming";

cout << s.substr(0, 4);

Output:

Prog

Example:

string s = "Programming";

cout << s.substr(3, 5);

Output:

gramm

If the length parameter is omitted:

string s = "Programming";

cout << s.substr(4);

Output:

ramming

```
---

### Important Notes

```C++ 

If the requested length exceeds the remaining characters, the function returns characters until the end of the string.

Example:

string s = "Hello";

cout << s.substr(2, 100);

Output:

llo

If the starting index is invalid, an exception is thrown.

```
---

## find()

```C++

Used to search for a character or substring.

Syntax:

s.find("text")

Example:

string s = "Programming";

cout << s.find("gram");

Output:

3

Example:

string s = "Hello";

cout << s.find('e');

Output:

1

If the element is not found:

string s = "Hello";

if(s.find('z') == string::npos)
{
    cout << "Not Found";
}

Output:

Not Found

string::npos represents that the character or substring was not found.

```
---

## Concatenation (+ and append())

```C++ 

Concatenation means joining strings.

Using + :

string first = "Hello";
string second = "World";

string result = first + " " + second;

cout << result;

Output:

Hello World

Using append():

string s = "Hello";

s.append(" World");

cout << s;

Output:

Hello World

```
---

## compare()

```C++ 

Used to compare two strings lexicographically (dictionary order).

Syntax:

s1.compare(s2)

Return Values:

0   -> Strings are equal
<0  -> First string is smaller
>0  -> First string is greater

Example:

string a = "Apple";
string b = "Banana";

cout << a.compare(b);

Since "Apple" comes before "Banana" alphabetically, the function returns a negative value.

Usually, direct comparison is preferred:

if(a == b)
{
    cout << "Equal";
}

```
---

# Mutability of Strings

```C++ 

A mutable object is an object that can be modified after creation.

C++ strings are mutable.

Example:

string s = "Hello";

s[0] = 'Y';

cout << s;

Output:

Yello

```
---

# Building a New String vs Modifying In Place

## Building a New String

```C++ 

string s = "hello";
string ans = "";

for(int i = 0; i < s.length(); i++)
{
    ans += toupper(s[i]);
}

cout << ans;

Output:

HELLO

The original string remains unchanged.

Extra Space Complexity:

O(n)

```
---

## Modifying In Place

```C++ 

string s = "hello";

for(int i = 0; i < s.length(); i++)
{
    s[i] = toupper(s[i]);
}

cout << s;

Output:

HELLO

The original string itself is modified.

Extra Space Complexity:

O(1)

```
---

# ASCII Basics

```C++ 

ASCII (American Standard Code for Information Interchange) assigns a numerical value to each character.

Important values:

'0' -> 48
'9' -> 57
'A' -> 65
'Z' -> 90
'a' -> 97
'z' -> 122

Characters are internally stored as numbers.

Example:

char ch = 'A';

cout << (int)ch;

Output:

65

```
---

## Converting Character Digit to Integer

```C++ 

char c = '8';

int num = c - '0';

cout << num;

Output:

8

Explanation:

'8' = 56
'0' = 48

56 - 48 = 8

```
---

## Converting Integer to Character

```C++ 

int num = 5;

char c = num + '0';

cout << c;

Output:

5

Explanation:

5 + 48 = 53

ASCII value 53 represents the character '5'.

```
---

## Manual Case Conversion Using ASCII

```C++ 

Difference between lowercase and uppercase letters:

'a' - 'A' = 32

Uppercase to Lowercase:

char ch = 'A';

ch = ch + 32;

cout << ch;

Output:

a

Lowercase to Uppercase:

char ch = 'z';

ch = ch - 32;

cout << ch;

Output:

Z

```
