#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;

    int matrix[row][col];
    // input matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
        cout << endl;
    }
    // print matrix
    cout << "Full matrix: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // print boundary elements
    int sum = 0;
    cout << "Boundary matrix: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // print  first row
            if (i == 0)
            {
                sum += matrix[i][j];
                cout << matrix[i][j] << " ";
            }
            // print last row
            else if (i == row - 1)
            {
                sum += matrix[i][j];
                cout << matrix[i][j] << " ";
            }
            // print fist col
            else if (j == 0)
            {
                sum += matrix[i][j];
                cout << matrix[i][j] << " ";
            }
            // print last column
            else if (j == col - 1)
            {
                sum += matrix[i][j];
                cout << matrix[i][j] << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << "boundary sum is : " << sum << endl;

    return 0;
}
