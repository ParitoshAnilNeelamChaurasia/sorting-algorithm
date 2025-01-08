
Time complexity didn't canges in merge sort instead it takes more time if the array is sorted in decreasing order
  
// Time complexity -> O(nlogn)
// space complexity -> O(n)

  
#include <bits/stdc++.h>
using namespace std;

// Function to merge two halves of the array
void merge(vector<int> &arr, int start, int mid, int end)
{
    int n1 = mid - start + 1; // Size of the left subarray
    int n2 = end - mid;       // Size of the right subarray

    // Create temporary arrays
    vector<int> left(n1);
    vector<int> right(n2);

    // Copy data to temporary arrays
    for (int i = 0; i < n1; ++i)
    {
        left[i] = arr[start + i];
    }
    for (int j = 0; j < n2; ++j)
    {
        right[j] = arr[mid + 1 + j];
    }

    // Merge the two halves
    int i = 0, j = 0, k = start;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy any remaining elements of the left subarray
    while (i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }

    // Copy any remaining elements of the right subarray
    while (j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

// Recursive function to perform merge sort
void mergeSort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2; // Find the middle point

        // Sort the left half
        mergeSort(arr, start, mid);

        // Sort the right half
        mergeSort(arr, mid + 1, end);

        // Merge the sorted halves
        merge(arr, start, mid, end);
    }
}

int main()
{
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};

    cout << "Original array: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    return 0;
}
