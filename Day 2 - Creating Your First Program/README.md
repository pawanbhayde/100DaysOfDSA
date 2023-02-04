# Day 2 - Creating Your First Program

### Programming Languages
#### Why we need it?
- A Language using which, we can instruct the computer to carry out real life tasks and computations is called a programming language. It acts as a language in which we could easily express our thoughts to the machine.
- Like natural languages, programming language has a fixed set of rules according to which programs could be written in it. These programs are then converted into a language which machines can understand. This task is carried out by a special software called compiler
- Every angquage has its own compiler/Interpreter.
- Once a program is compiled and linked, its executable is created and the computer can run our program now.

### Compilation Process
![image](https://user-images.githubusercontent.com/82137686/216605020-cc897bb2-b8be-4825-8e47-e9dae068b688.png)

### IDE
An integrated development environment (IDE) is a software application that helps programmers develop software code efficiently. It increases developer productivity by combining capabilities such as software editing, building, testing, and packaging in an easy-to-use application.

### Datatypes & Variables
A variable in C is a memory location associated with some name in order to store some form of data and retrieve it when required & data types are used to tell the variables the type of data they can store.
![image](https://user-images.githubusercontent.com/82137686/216607372-098153ae-3de7-4cf9-bb5b-aa13ed16cf35.png)

- int: This means that it can store values from -32,768 to 32,767, or more depending on hardware. Like all of these other data types, there is an unsigned variant that can be used.
- char: The CHAR data type stores character data in a fixed-length field. Data can be a string of single-byte or multibyte letters, numbers, and other characters that are supported by the code set of your database locale.
- float: The float data type represents a floating-point or decimal number. Examples of floats are 0.1243 and 12.245 .
- void: The void data type always represents an empty set of values. The only object that can be declared with the type specifier void is a pointer. You cannot declare a variable of type void , but you can explicitly convert any expression to type void .

### Type Casting
Type casting refers to changing an variable of one data type into another. The compiler will automatically change one type of data into another if it makes sense. For instance, if you assign an integer value to a floating-point variable, the compiler will convert the int to a float. Casting allows you to make this type conversion explicit, or to force it when it wouldn’t normally happen.

1. Implicit Type Conversion
When the type conversion is performed automatically by the compiler without programmers intervention, such type of conversion is known as implicit type conversion or type promotion.
```
int x;
for(x=97; x<=122; x++)
{
    printf("%c", x);   /*Implicit casting from int to char thanks to %c*/
}
```

2. Explicit Type Conversion
The type conversion performed by the programmer by posing the data type of the expression of specific type is known as explicit type conversion. The explicit type conversion is also known as type casting.
Type casting in c is done in the following form:
```
(data_type)expression;
```
where, data_type is any valid c data type, and expression may be constant, variable or expression.

For example,
```
int x;
for(x=97; x<=122; x++)
{
    printf("%c", (char)x);   /*Explicit casting from int to char*/
}
```
The following rules have to be followed while converting the expression from one type to another to avoid the loss of information:

- All integer types to be converted to float.
- All float types to be converted to double.
- All character types to be converted to integer.

### operators
An operator is a symbol that operates on a value or a variable. For example: + is an operator to perform addition.

#### Arithmetic Operators
An arithmetic operator performs mathematical operations such as addition, subtraction, multiplication, division etc on numerical values (constants and variables).
| Operator  | Meaning of Operator |
| ------------- | ------------- |
| +  | addition or unary plus  |
| -  | subtraction or unary minus  |
| *  | multiplication  |
| /  | division  |
| %  | remainder after division (modulo division)  |

Example 1: Arithmetic Operators
```
// Working of arithmetic operators
#include <stdio.h>
int main()
{
    int a = 9,b = 4, c;
    
    c = a+b;
    printf("a+b = %d \n",c);
    c = a-b;
    printf("a-b = %d \n",c);
    c = a*b;
    printf("a*b = %d \n",c);
    c = a/b;
    printf("a/b = %d \n",c);
    c = a%b;
    printf("Remainder when a divided by b = %d \n",c);
    
    return 0;
}
```
Output
```
a+b = 13
a-b = 5
a*b = 36
a/b = 2
Remainder when a divided by b=1
```

#### Assignment Operators
In C++, assignment operators are used to assign values to variables. For example,
```
// assign 5 to a
a = 5;
```
Here, we have assigned `a` value of **5** to the variable `a`.

| Operator |	Example |	Equivalent to |
| -------- | -------- | ------------- |
| = |	a = b; |	a = b; |
| += |	a += b; |	a = a + b; |
| -= |	a -= b; |	a = a - b; |
| *= |	a *= b; |	a = a * b; |
| /= |	a /= b; |	a = a / b; |
| %= |	a %= b; |	a = a % b; |

Example 2: Assignment Operators
```
#include <iostream>
using namespace std;

int main() {
    int a, b;

    // 2 is assigned to a
    a = 2;

    // 7 is assigned to b
    b = 7;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "\nAfter a += b;" << endl;

    // assigning the sum of a and b to a
    a += b;  // a = a +b
    cout << "a = " << a << endl;

    return 0;
}
```
Output
```
a = 2
b = 7

After a += b;
a = 9
```

#### Relational Operators
A relational operator is used to check the relationship between two operands. For example,
```
// checks if a is greater than b
a > b;
```
Here, `>` is a relational operator. It checks if `a` is greater than `b` or not.

If the relation is **true**, it returns **1** whereas if the relation is **false**, it returns **0**.

| Operator |	Meaning |	Example |
| -------- | -------- | ------- |
| == |	Is Equal To |	3 == 5 gives us false |
| != |	Not Equal To |	3 != 5 gives us true |
| > |	Greater Than |	3 > 5 gives us false |
| < |	Less Than |	3 < 5 gives us true |
| >= |	Greater Than or Equal To |	3 >= 5 give us false |
| <= |	Less Than or Equal To |	3 <= 5 gives us true |

Example 3: Relational Operators
```
#include <iostream>
using namespace std;

int main() {
    int a, b;
    a = 3;
    b = 5;
    bool result;

    result = (a == b);   // false
    cout << "3 == 5 is " << result << endl;

    result = (a != b);  // true
    cout << "3 != 5 is " << result << endl;

    result = a > b;   // false
    cout << "3 > 5 is " << result << endl;

    result = a < b;   // true
    cout << "3 < 5 is " << result << endl;

    result = a >= b;  // false
    cout << "3 >= 5 is " << result << endl;

    result = a <= b;  // true
    cout << "3 <= 5 is " << result << endl;

    return 0;
}
```
Output
```
3 == 5 is 0
3 != 5 is 1
3 > 5 is 0
3 < 5 is 1
3 >= 5 is 0
3 <= 5 is 1
```

#### Logical Operators
Logical operators are used to check whether an expression is **true** or **false**. If the expression is **true**, it returns **1** whereas if the expression is **false**, it returns **0**.

| Operator |	Example |	Meaning |
| -------- | -------- | ------- |
| && |	expression1 && expression2 |	Logical AND. True only if all the operands are true. |
| ll |	expression1 ll expression2 |	Logical OR. True if at least one of the operands is true. |
| ! |	!expression |	Logical NOT. True only if the operand is false. |

In C++, logical operators are commonly used in decision making. To further understand the logical operators, let's see the following examples,
```
Suppose,
a = 5
b = 8

Then,

(a > 3) && (b > 5) evaluates to true
(a > 3)  && (b < 5) evaluates to false

(a > 3) || (b > 5) evaluates to true
(a > 3) || (b < 5) evaluates to true
(a < 3) || (b < 5) evaluates to false

!(a < 3) evaluates to true
!(a > 3) evaluates to false
```
Example 4: Logical Operators
```
#include <iostream>
using namespace std;

int main() {
    bool result;

    result = (3 != 5) && (3 < 5);     // true
    cout << "(3 != 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 < 5);    // false
    cout << "(3 == 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 > 5);    // false
    cout << "(3 == 5) && (3 > 5) is " << result << endl;

    result = (3 != 5) || (3 < 5);    // true
    cout << "(3 != 5) || (3 < 5) is " << result << endl;

    result = (3 != 5) || (3 > 5);    // true
    cout << "(3 != 5) || (3 > 5) is " << result << endl;

    result = (3 == 5) || (3 > 5);    // false
    cout << "(3 == 5) || (3 > 5) is " << result << endl;

    result = !(5 == 2);    // true
    cout << "!(5 == 2) is " << result << endl;

    result = !(5 == 5);    // false
    cout << "!(5 == 5) is " << result << endl;

    return 0;
}
```
Output
```
(3 != 5) && (3 < 5) is 1
(3 == 5) && (3 < 5) is 0
(3 == 5) && (3 > 5) is 0
(3 != 5) || (3 < 5) is 1
(3 != 5) || (3 > 5) is 1
(3 == 5) || (3 > 5) is 0
!(5 == 2) is 1
!(5 == 5) is 0
```

#### Bitwise Operators
In C++, bitwise operators are used to perform operations on individual bits. They can only be used alongside char and int data types.
| Operator |	Description |
| -------- | ------------ |
| & |	Binary AND |
| ll |	Binary OR |
| ^ |	Binary XOR |
| ~ |	Binary One's Complement |
| << |	Binary Shift Left |
| >> |	Binary Shift Right |

### Conditionals
In computer programming, we use the `if...else` statement to run one block of code under certain conditions and another block of code under different conditions.

For example, assigning grades (A, B, C) based on marks obtained by a student.

- if the percentage is above 90, assign grade A
- if the percentage is above 75, assign grade B
- if the percentage is above 65, assign grade C

There are three forms of if...else statements in C++.

1. `if` statement
2. `if...else` statement
3. `if...else if...else` statement

#### if Statement
The syntax of the if statement is:
```
if (condition) {
  // body of if statement
}
```
The `if` statement evaluates the condition inside the parentheses ( ).

- If the condition evaluates to true, the code inside the body of if is executed.
- If the condition evaluates to false, the code inside the body of if is skipped.

Example 1: C++ if Statement
```
// Program to print positive number entered by the user
// If the user enters a negative number, it is skipped

#include <iostream>
using namespace std;

int main() {

  int number;

  cout << "Enter an integer: ";
  cin >> number;

  // checks if the number is positive
  if (number > 0) {
    cout << "You entered a positive integer: " << number << endl;
  }

  cout << "This statement is always executed.";

  return 0;
}
```
Output 1
```
Enter an integer: 5
You entered a positive number: 5
This statement is always executed.
```
When the user enters 5, the condition number > 0 is evaluated to true and the statement inside the body of if is executed.

Output 2
```
Enter a number: -5
This statement is always executed.
```
When the user enters -5, the condition number > 0 is evaluated to false and the statement inside the body of if is not executed.

#### C++ if...else
The `if` statement can have an optional `else` clause. Its syntax is:
```
if (condition) {
  // block of code if condition is true
}
else {
  // block of code if condition is false
}
```
The `if..else` statement evaluates the condition inside the parenthesis.

`If` the condition evaluates `true`,

- the code inside the body of `if` is executed
- the code inside the body of `else` is skipped from execution

`If` the condition evaluates `false`,

- the code inside the body of `else` is executed
- the code inside the body of `if` is skipped from execution

Example 2: C++ if...else Statement
```
// Program to check whether an integer is positive or negative
// This program considers 0 as a positive number

#include <iostream>
using namespace std;

int main() {

  int number;

  cout << "Enter an integer: ";
  cin >> number;

  if (number >= 0) {
    cout << "You entered a positive integer: " << number << endl;
  }
  else {
    cout << "You entered a negative integer: " << number << endl;
  }

  cout << "This line is always printed.";

  return 0;
}
```
Output 1
```
Enter an integer: 4
You entered a positive integer: 4.
This line is always printed.
```
In the above program, we have the condition number >= 0. If we enter the number greater or equal to 0, then the condition evaluates true.

Here, we enter 4. So, the condition is true. Hence, the statement inside the body of if is executed.

Output 2
```
Enter an integer: -4
You entered a negative integer: -4.
This line is always printed.
```
Here, we enter -4. So, the condition is false. Hence, the statement inside the body of else is executed.

#### if...else...else if statement
The `if...else` statement is used to execute a block of code among two alternatives. However, if we need to make a choice between more than two alternatives, we use the `if...else if...else` statement.

The syntax of the `if...else if...else` statement is:
```
if (condition1) {
  // code block 1
}
else if (condition2){
  // code block 2
}
else {
  // code block 3
}
```
Here,

- If `condition1` evaluates to `true`, the code block 1 is executed.
- If `condition1` evaluates to `false`, then condition2 is evaluated.
- If `condition2` is `true`, the code block 2 is executed.
- If `condition2` is `false`, the code block 3 is executed.

Example 3: C++ if...else...else if
```
// Program to check whether an integer is positive, negative or zero

#include <iostream>
using namespace std;

int main() {

  int number;

  cout << "Enter an integer: ";
  cin >> number;

  if (number > 0) {
    cout << "You entered a positive integer: " << number << endl;
  } 
  else if (number < 0) {
    cout << "You entered a negative integer: " << number << endl;
  } 
  else {
    cout << "You entered 0." << endl;
  }

  cout << "This line is always printed.";

  return 0;
}
```
Output 1
```
Enter an integer: 1
You entered a positive integer: 1.
This line is always printed.
```
Output 2
```
Enter an integer: -2
You entered a negative integer: -2.
This line is always printed.
```
Output 3
```
Enter an integer: 0
You entered 0.
This line is always printed.
```
In this program, we take a number from the user. We then use the if...else if...else ladder to check whether the number is positive, negative, or zero.

If the number is greater than 0, the code inside the if block is executed. If the number is less than 0, the code inside the else if block is executed. Otherwise, the code inside the else block is executed.

### Loop
#### for loop
In computer programming, loops are used to repeat a block of code.

For example, let's say we want to show a message 100 times. Then instead of writing the print statement 100 times, we can use a loop.

That was just a simple example; we can achieve much more efficiency and sophistication in our programs by making effective use of loops.

The syntax of for-loop is:
```
for (initialization; condition; update) {
    // body of-loop 
}
```
Example : Printing Numbers From 1 to 5
```
#include <iostream>

using namespace std;

int main() {
        for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
    }
    return 0;
}
```
Output
```
1 2 3 4 5
```
Here is how this program works

| Iteration |	Variable |	i <= 5 | Action |
| --------- | -------- | ------- | ------ |
| 1st |	i = 1 |	true |	1 is printed. i is increased to 2. |
| 2nd |	i = 2 |	true |	2 is printed. i is increased to 3. |
| 3rd |	i = 3 |	true |	3 is printed. i is increased to 4. |
| 4th	| i = 4 |	true |	4 is printed. i is increased to 5. |
| 5th |	i = 5 | true |	5 is printed. i is increased to 6. |
| 6th |	i = 6 |	false |	The loop is terminated |

#### while Loop
The syntax of the while loop is:
```
while (condition) {
    // body of the loop
}
```
Here,

A while loop evaluates the condition
- If the condition evaluates to true, the code inside the while loop is executed.
- The condition is evaluated again.
- This process continues until the condition is false.
- When the condition evaluates to false, the loop terminates.

Example : Display Numbers from 1 to 5
```
// C++ Program to print numbers from 1 to 5

#include <iostream>

using namespace std;

int main() {
    int i = 1; 

    // while loop from 1 to 5
    while (i <= 5) {
        cout << i << " ";
        ++i;
    }
    
    return 0;
}
```
Output
```
1 2 3 4 5
```
Here is how this program works

| Iteration |	Variable |	i <= 5 | Action |
| --------- | -------- | ------- | ------ |
| 1st |	i = 1 |	true |	1 is printed. i is increased to 2. |
| 2nd |	i = 2 |	true |	2 is printed. i is increased to 3. |
| 3rd |	i = 3 |	true |	3 is printed. i is increased to 4. |
| 4th	| i = 4 |	true |	4 is printed. i is increased to 5. |
| 5th |	i = 5 | true |	5 is printed. i is increased to 6. |
| 6th |	i = 6 |	false |	The loop is terminated |

#### do...while Loop
The do...while loop is a variant of the while loop with one important difference: the body of do...while loop is executed once before the condition is checked.

Its syntax is:
```
do {
   // body of loop;
}
while (condition);
```
Here,

- The body of the loop is executed at first. Then the condition is evaluated.
- If the condition evaluates to true, the body of the loop inside the do statement is executed again.
- The condition is evaluated once again.
- If the condition evaluates to true, the body of the loop inside the do statement is executed again.
- This process continues until the condition evaluates to false. Then the loop stops.

Example : Display Numbers from 1 to 5
```
// C++ Program to print numbers from 1 to 5

#include <iostream>

using namespace std;

int main() {
    int i = 1; 

    // do...while loop from 1 to 5
    do {
        cout << i << " ";
        ++i;
    }
    while (i <= 5);
    
    return 0;
}
```
Output
```
1 2 3 4 5
```
Here is how this program works

| Iteration |	Variable |	i <= 5 | Action |
| --------- | -------- | ------- | ------ |
| 1st |	i = 1 |	true |	1 is printed. i is increased to 2. |
| 2nd |	i = 2 |	true |	2 is printed. i is increased to 3. |
| 3rd |	i = 3 |	true |	3 is printed. i is increased to 4. |
| 4th	| i = 4 |	true |	4 is printed. i is increased to 5. |
| 5th |	i = 5 | true |	5 is printed. i is increased to 6. |
| 6th |	i = 6 |	false |	The loop is terminated |
