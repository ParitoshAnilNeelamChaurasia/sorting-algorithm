

// Time complexity -> O(n2) -> worst case
// best case -> O(n)

// Total passes -> n-1


// Insertion algorithm is a stable algorithm , since we start comparing from the back of the sorted subarray and never cross an element equal to the inserted element
#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int>& a, int n) {
    for (int i = 1; i < n; ++i) {
        int key = a[i]; // Store the current element
        int j = i - 1;

        // Move elements greater than key one position ahead
        while (j >= 0 && a[j] > key) 
        {
            a[j + 1] = a[j];
            j--;
        }

        // Place the key in its correct position
        a[j + 1] = key;
    }
}

int main() {
    vector<int> a = {1, 32, 3, 2, 1};

    insertion_sort(a, a.size());

    for (int& it : a) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
