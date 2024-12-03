#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }
}

// Function to print an array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << " " << arr[i];
}

// Function to take array input from the user
void inputArray(int arr[], int size)
{
    cout << "Enter " << size << " elements for the array:\n";
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
}

// Driver program to test above functions
int main()
{
    int N;
    cout << "Enter the size of the array: ";
    cin >> N;

    int arr[N];
    inputArray(arr, N);

    // Sorting the array using Bubble Sort
    bubbleSort(arr, N);

    cout << "Sorted array: \n";
    printArray(arr, N);

    return 0;
}
