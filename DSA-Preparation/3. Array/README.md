# Arrays in C++

```C++
Arrays allow us to store multiple values of the same data type in contiguous memory locations, enabling fast access and efficient traversal.

In this section, we learned:

- How arrays are stored in memory.
- How to declare and traverse 1D arrays.
- How to declare and traverse 2D arrays.
- Common mistakes while working with arrays.
- Why dynamic containers like vectors are needed.
```

# Memory Layout of Arrays (Contiguous Memory)

```C++
An array is a collection of elements of the same data type stored in contiguous (continuous) memory locations.

Example:

int arr[5] = {10, 20, 30, 40, 50};

Memory representation:

Index:      0     1     2     3     4
             ↓     ↓     ↓     ↓     ↓
          +-----+-----+-----+-----+-----+
Array ->  | 10  | 20  | 30  | 40  | 50  |
          +-----+-----+-----+-----+-----+

Each integer occupies a fixed amount of memory (typically 4 bytes).

Example memory addresses:

Index   Value   Address
0       10      1000
1       20      1004
2       30      1008
3       40      1012
4       50      1016
```

## Why is Array Indexing O(1)?

```C++
Arrays provide constant-time access because the address of any element can be directly calculated.

Formula:

Address = Base Address + (Index × Size of Data Type)

Example:

arr[3]

If:

Base Address = 1000
Size of int = 4 bytes

Then:

Address of arr[3]
= 1000 + (3 × 4)
= 1012

Because the computer directly calculates the address, accessing any element takes constant time.

Time Complexity:

O(1)
```

## Advantages of Contiguous Memory

```C++
1. Fast Access

cout << arr[4];

Accessing an element is very fast because of direct indexing.

2. Easy Traversal

for(int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
}

Output:

10 20 30 40 50
```

## Disadvantages

```C++
1. Fixed Size

Once an array is created, its size cannot be changed.

int arr[5];

The size remains fixed throughout the program.

2. Costly Insertion and Deletion

To insert or delete elements in the middle, many elements may need to be shifted.
```

# Important Terms

```C++
Contiguous Memory  -> Elements stored continuously in memory
Index              -> Position of an element
Base Address       -> Address of the first element
O(1) Access        -> Constant-time access
Traversal          -> Visiting every element one by one
```

# 1D Array Declaration, Initialization, and Traversal

```C++
A 1D Array stores elements in a linear sequence.
```

## Declaration

```C++
Syntax:

data_type array_name[size];

Example:

int marks[5];

This creates an integer array capable of storing 5 elements.
```

## Initialization

### Initialize All Elements

```C++
int arr[5] = {10, 20, 30, 40, 50};
```

### Partial Initialization

```C++
int arr[5] = {10, 20};

Remaining elements become:

10 20 0 0 0
```

### Initialize All Elements to Zero

```C++
int arr[5] = {0};

Output:

0 0 0 0 0
```

### Automatic Size Detection

```C++
int arr[] = {10, 20, 30, 40};

Compiler automatically determines the size.
```

## Accessing Elements

```C++
Syntax:

array_name[index]

Example:

int arr[5] = {10, 20, 30, 40, 50};

cout << arr[0] << endl;
cout << arr[2] << endl;
cout << arr[4] << endl;

Output:

10
30
50
```

## Modifying Elements

```C++
Array elements can be modified after creation.

int arr[3] = {10, 20, 30};

arr[1] = 100;

Array becomes:

10 100 30
```

## Traversal

```C++
Traversal means visiting every element one by one.

Forward Traversal:

for(int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
}

Output:

10 20 30 40 50
```

## Taking Input in an Array

```C++
int arr[5];

for(int i = 0; i < 5; i++) {
    cin >> arr[i];
}

Printing the array:

for(int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
}
```

# 2D Arrays (Matrices)

```C++
A 2D Array is an array of arrays arranged in rows and columns.
```

## Declaration

```C++
Syntax:

data_type array_name[rows][columns];

Example:

int matrix[2][3];

This creates:

- 2 Rows
- 3 Columns

Total elements:

2 × 3 = 6
```

## Initialization

```C++
int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

Representation:

      0   1   2
    +---+---+---+
0   | 1 | 2 | 3 |
    +---+---+---+
1   | 4 | 5 | 6 |
    +---+---+---+
```

## Accessing Elements

```C++
Syntax:

matrix[row][column]

Examples:

matrix[0][2]; // 3
matrix[1][1]; // 5
```

## Row-Major Storage

```C++
Although 2D arrays appear as tables, they are stored in contiguous memory.

C++ stores 2D arrays in Row-Major Order.

Example:

int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

Memory layout:

1 → 2 → 3 → 4 → 5 → 6

Entire rows are stored one after another.
```

## Traversing a 2D Array

```C++
2D arrays require nested loops.

Outer loop -> Rows
Inner loop -> Columns

for(int i = 0; i < 2; i++) {

    for(int j = 0; j < 3; j++) {
        cout << matrix[i][j] << " ";
    }

    cout << endl;
}

Output:

1 2 3
4 5 6
```

## Taking Input in a 2D Array

```C++
int matrix[2][3];

for(int i = 0; i < 2; i++) {

    for(int j = 0; j < 3; j++) {
        cin >> matrix[i][j];
    }
}
```

## Applications of 2D Arrays

```C++
- Matrices
- Dynamic Programming (DP)
- Grids and Maze Problems
- Game Boards
- Image Processing
```

# Fixed-Size Arrays vs Dynamic Sizing

```C++
Normal arrays in C++ have a fixed size.

Example:

int arr[5];

Once created, the size cannot be changed.

arr[10]; // Does not increase array size
```

## Problems with Fixed Size

```C++
If Array Size is Too Large:

Memory is wasted.

Example:

int marks[100];

If only 20 students exist, 80 spaces remain unused.

If Array Size is Too Small:

The array cannot accommodate additional elements.
```

## Need for Dynamic Sizing

```C++
In real applications, the required size is often unknown.

To solve this problem, C++ provides vector.

Example:

vector<int> nums;

nums.push_back(10);
nums.push_back(20);
nums.push_back(30);

Vectors automatically resize themselves when required.
```

## Arrays vs Vectors

```C++
Array                    Vector
------------------------------------------------
Fixed Size               Dynamic Size
Cannot Resize            Can Resize
Less Flexible            More Flexible
Slightly Faster          Slightly More Overhead
```

# Common Array Bugs

```C++
Array bugs are extremely common in programming.
```

## Off-by-One Error

```C++
An off-by-one error occurs when a loop executes one iteration too many or too few.

Correct:

for(int i = 0; i < 5; i++) {
    cout << arr[i];
}

Wrong:

for(int i = 0; i <= 5; i++) {
    cout << arr[i];
}

When:

i = 5

the program tries to access:

arr[5]

which does not exist.
```

## Out-of-Bounds Access

```C++
Accessing indices outside the valid range of an array is called out-of-bounds access.

Examples:

arr[10];
arr[-1];

Both are invalid.
```

## Undefined Behavior (UB)

```C++
C++ does not automatically check array boundaries.

Out-of-bounds access leads to Undefined Behavior, meaning the language provides no guarantee about what will happen.

Possible outcomes:

- Garbage values
- Program crash
- Memory corruption
- Program appears to work

Example:

int arr[3] = {10, 20, 30};

cout << arr[5];

Output may vary every time.
```
