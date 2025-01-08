

T.c -> O(nlogn)
worst case -> O(n*n) -> came when our pivot element is repeatedly the smallest or the largest element
// ex -> {1,2,3,4,5,6}  -> in this case '6' is always our pivot element and the largest element

S.c -> O(1) -> reason to use this sorting technique over merge sort -> as we get better time complexity in merge sort but 
O(n) space complexity in "merge sort"

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& a, int st, int en) {
    int idx = st - 1; // Index for the smaller element
    int pivot = a[en]; // Pivot element

    for (int j = st; j < en; ++j) {
        if (a[j] <= pivot) {
            idx++;
            swap(a[j], a[idx]); // Swap elements to maintain partition
        }
    }
    idx++;
    swap(a[en], a[idx]); // Place pivot in the correct position

    // Return the position of the pivot element
    return idx;
}

void quicksort(vector<int>& a, int st, int en) {
    if (st < en) {
        int piv_idx = partition(a, st, en); // Get the pivot index

        quicksort(a, st, piv_idx - 1); // Sort the left half
        quicksort(a, piv_idx + 1, en); // Sort the right half
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) { 
        cin >> a[i];
    }

    quicksort(a, 0, n - 1); 

    for (const auto& it : a) 
    { 
        cout << it << " ";
    }
    cout << endl;

    return 0;
}

// 5
// 21 1 45 5 9

O/P
  
1 5 9 21 45 
