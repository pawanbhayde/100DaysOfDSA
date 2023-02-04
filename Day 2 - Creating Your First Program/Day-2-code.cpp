#include <iostream>
using namespace std;

int main()
{
    // Type Casting
    int x;
    // Implicit
    for (x = 97; x <= 122; x++)
    {
        printf("%c", x); /*Implicit casting from int to char thanks to %c*/
    }

    // Explicit
    int x;
    for (x = 97; x <= 122; x++)
    {
        printf("%c", (char)x); /*Explicit casting from int to char*/
    }
    //  Arithmetic Operators
    int a = 9, b = 4, c;

    c = a + b;
    printf("a+b = %d \n", c);
    c = a - b;
    printf("a-b = %d \n", c);
    c = a * b;
    printf("a*b = %d \n", c);
    c = a / b;
    printf("a/b = %d \n", c);
    c = a % b;
    printf("Remainder when a divided by b = %d \n", c);

    // Assignment Operators
    int a, b;

    // 2 is assigned to a
    a = 2;

    // 7 is assigned to b
    b = 7;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "\nAfter a += b;" << endl;

    // assigning the sum of a and b to a
    a += b; // a = a +b
    cout << "a = " << a << endl;

    // Relational Operators
    int a, b;
    a = 3;
    b = 5;
    bool result;

    result = (a == b); // false
    cout << "3 == 5 is " << result << endl;

    result = (a != b); // true
    cout << "3 != 5 is " << result << endl;

    result = a > b; // false
    cout << "3 > 5 is " << result << endl;

    result = a < b; // true
    cout << "3 < 5 is " << result << endl;

    result = a >= b; // false
    cout << "3 >= 5 is " << result << endl;

    result = a <= b; // true
    cout << "3 <= 5 is " << result << endl;

    // Logical Operators
    bool result;

    result = (3 != 5) && (3 < 5); // true
    cout << "(3 != 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 < 5); // false
    cout << "(3 == 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 > 5); // false
    cout << "(3 == 5) && (3 > 5) is " << result << endl;

    result = (3 != 5) || (3 < 5); // true
    cout << "(3 != 5) || (3 < 5) is " << result << endl;

    result = (3 != 5) || (3 > 5); // true
    cout << "(3 != 5) || (3 > 5) is " << result << endl;

    result = (3 == 5) || (3 > 5); // false
    cout << "(3 == 5) || (3 > 5) is " << result << endl;

    result = !(5 == 2); // true
    cout << "!(5 == 2) is " << result << endl;

    result = !(5 == 5); // false
    cout << "!(5 == 5) is " << result << endl;

    //  if Statement
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    // checks if the number is positive
    if (number > 0)
    {
        cout << "You entered a positive integer: " << number << endl;
    }

    cout << "This statement is always executed.";

    // if...else
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (number >= 0)
    {
        cout << "You entered a positive integer: " << number << endl;
    }
    else
    {
        cout << "You entered a negative integer: " << number << endl;
    }

    cout << "This line is always printed.";

    // if...else...else if statement
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (number > 0)
    {
        cout << "You entered a positive integer: " << number << endl;
    }
    else if (number < 0)
    {
        cout << "You entered a negative integer: " << number << endl;
    }
    else
    {
        cout << "You entered 0." << endl;
    }

    cout << "This line is always printed.";

    //   for loop
    for (int i = 1; i <= 5; ++i)
    {
        cout << i << " ";
    }

    // while Loop
    int i = 1;

    // while loop from 1 to 5
    while (i <= 5)
    {
        cout << i << " ";
        ++i;
    }

    // do...while Loop
    int i = 1;

    // do...while loop from 1 to 5
    do
    {
        cout << i << " ";
        ++i;
    } while (i <= 5);
}