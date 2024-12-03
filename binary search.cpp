#include <bits/stdc++.h>
using namespace std;

// Custom partition function for Quick Sort
int customPartition(int data[], int low, int high)
{
    int start = low, enda = high;
    int pivot = data[start];

    while (start < enda)
    {
        while (data[start] <= pivot)
        {
            start++;
        }
        while (data[enda] > pivot)
        {
            enda--;
        }
        if (start < enda)
        {
            swap(data[start], data[enda]);
        }
    }
    swap(data[low], data[enda]);
    return enda;
}

// Custom Quick Sort function
void customQuickSort(int data[], int low, int high)
{
    if (low < high)
    {
        int partitionIndex = customPartition(data, low, high);
        customQuickSort(data, low, partitionIndex - 1);
        customQuickSort(data, partitionIndex + 1, high);
    }
}

// Custom binary search function
int customBinarySearch(int data[], int size, int target)
{
    int left, right, mid;
    left = 0, right = size;

    while (left <= right)
    {
        mid = (left + right) / 2;
        if (target == data[mid])
        {
            return mid;
        }
        else if (target > data[mid])
        {
            left = mid + 1;
        }
        else if (target < data[mid])
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int numElements, target;
    cin >> numElements;
    int arrayData[numElements];
    for (int i = 0; i < numElements; i++)
    {
        cin >> arrayData[i];
    }

    // Sort the array using custom Quick Sort
    customQuickSort(arrayData, 0, numElements - 1);

    cout << "Which value are you looking for: ";
    cin >> target;
    int result = customBinarySearch(arrayData, numElements, target);

    // Print the sorted array
    for (int i = 0; i < numElements; i++)
    {
        cout << arrayData[i] << " ";
    }
    cout << endl;

    if (result == -1)
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found at index: " << result << endl;
    }

    return 0;
}
