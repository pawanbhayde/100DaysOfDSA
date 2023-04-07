#include <iostream>
using namespace std;

void drawPattern(int width, int height)
{
    for (int row = 1; row <= height; row++)
    {
        for (int col = 1; col <= width; col++)
        {
            if (row == 1 || row == height || col == 1 || col == width)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    // Solid Reactngle Pattern
    int rows = 3;
    int columns = 5;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Hollow Reactngle Pattern
    int width = 5;
    int height = 3;
    drawPattern(width, height);

    // Half Pyramid Pattern
    const int rows = 6;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Inverted Half Pyramid Pattern
    int n = 6; // number of rows
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Numeric Half Pyramid Pattern
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
