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

    cout << " print the primary diagonal matrix: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                cout << matrix[i][j] << " ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << " print the secondary diagonal matrix: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i + j == row - 1)
            {
                cout << matrix[i][j] << " ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
