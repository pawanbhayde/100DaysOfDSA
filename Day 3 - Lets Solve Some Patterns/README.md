# Solid Reactngle Pattern
```
* * * * *
* * * * *
* * * * *
```
The program initializes `rows` and `columns` variables with values `3` and `5` respectively. It then uses a nested loop to iterate over the `rows` and `columns` and print a `*` for each column. The outer loop handles the `rows`, while the inner loop handles the `columns`.

**Code**
```
#include <iostream>

int main() {
    int rows = 3;
    int columns = 5;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}

```

# Hollow Reactngle Pattern
```
* * * * *
*       *
* * * * *
```
This program defines a function `drawPattern` that takes two arguments: `width` and `height`, which represent the dimensions of the pattern. It then uses two nested loops to iterate over each `row` and `column` of the pattern, checking if the current position is on the border (i.e. the first or last `row` or `column`), and printing an asterisk if it is, and a space otherwise. Finally, the program calls `drawPattern` with the `width` and `height` specified in the main function, which are `5` and `3`, respectively.

**Code**
```
#include <iostream>
using namespace std;

void drawPattern(int width, int height) {
  for (int row = 1; row <= height; row++) {
    for (int col = 1; col <= width; col++) {
      if (row == 1 || row == height || col == 1 || col == width) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
}

int main() {
  int width = 5;
  int height = 3;
  drawPattern(width, height);
  return 0;
}
```

# Half Pyramid Pattern
```
*
* *
* * *
* * * *
* * * * *
* * * * * *
```
This program uses two nested loops to print the asterisks. The outer loop runs from 1 to the number of rows in the pattern, and the inner loop runs from 1 to the current row number. In the inner loop, we print an asterisk followed by a space for each column in the row. After the inner loop finishes, we print a newline character to move to the next row.

**Code**
```
#include <iostream>

int main() {
    const int rows = 6;
 
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}
```

# Inverted Half Pyramid Pattern
```
* * * * * *
* * * * *
* * * *
* * *
* *
*
```
The program first initializes the number of rows to 6, and then uses two nested loops to print the pattern.

The outer loop iterates from n (the number of rows) down to 1. The inner loop then prints i asterisks on each row. The endl statement ends the current line and moves to the next one.

As a result, the first row has 6 asterisks, the second row has 5 asterisks, and so on until the last row, which has just 1 asterisk.

**Code**
```
#include <iostream>
using namespace std;

int main() {
    int n = 6; // number of rows
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
```

# Numeric Half Pyramid Pattern
```
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
```
- We first take the input from the user for the number of rows to be printed.
- Then we use nested for loops to iterate through the rows and columns to print the pattern.
- The outer loop is used to print the rows and the inner loop is used to print the numbers in each row.
- The inner loop prints the numbers from 1 to the current row number.
- Finally, we print a newline character to move to the next row.

**Code**
```
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
```
