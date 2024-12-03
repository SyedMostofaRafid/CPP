#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter fist row column size: ";
    int row_size1, column_size1;
    cin >> row_size1 >> column_size1;

    int matrix_1[row_size1][column_size1];
    // input first matrix
    for (int i = 0; i < row_size1; i++)
    {
        for (int j = 0; j < column_size1; j++)
        {
            cin >> matrix_1[i][j];
        }
        cout << endl;
    }

    // second matrix
    cout << "Enter the second row column: ";
    int row_size2, column_size2;
    cin >> row_size2 >> column_size2;

    int matrix_2[row_size2][column_size2];

    for (int i = 0; i < row_size2; i++)
    {
        for (int j = 0; j < column_size2; j++)
        {
            cin >> matrix_2[i][j];
        }
        cout << endl;
    }

    // sum of two matrices
    // to store the sum matrix
    int sum_matrix[row_size1][column_size1];
    for (int i = 0; i < row_size1; i++)
    {
        for (int j = 0; j < column_size1; j++)
        {
            // sum matrix       first matrix     second matrix
            sum_matrix[i][j] = matrix_1[i][j] + matrix_2[i][j];
        }
        cout << endl;
    }

    // print first matrix
    cout << "first matrix: " << endl;
    for (int i = 0; i < row_size1; i++)
    {
        for (int j = 0; j < column_size1; j++)
        {
            cout << matrix_1[i][j] << " ";
        }
        cout << endl;
    }

    // print second matrix
    cout << "second matrix: " << endl;
    for (int i = 0; i < row_size2; i++)
    {
        for (int j = 0; j < column_size2; j++)
        {
            cout << matrix_2[i][j] << " ";
        }
        cout << endl;
    }

    // print sum matrix
    cout << " sum of two matrices: " << endl;
    for (int i = 0; i < row_size1; i++)
    {
        for (int j = 0; j < column_size1; j++)
        {
            cout << sum_matrix[i][j] << " ";
        }
        cout << endl;
    }

    // transpose matrix
    //  declare a transpose matrix
    int transpose_matrix[row_size1][column_size1];

    for (int i = 0; i < row_size1; i++)
    {
        for (int j = 0; j < column_size1; j++)
        {
            transpose_matrix[i][j] = matrix_1[j][i];
        }
    }

    cout << "Transpose matrix: " << endl;
    for (int i = 0; i < row_size1; i++)
    {
        for (int j = 0; j < column_size1; j++)
        {
            cout << transpose_matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
