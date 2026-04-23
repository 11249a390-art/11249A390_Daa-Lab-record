BINARY SEARCH 

AIM : To implement Binary Search on a sorted array and measure the time taken for execution.

ALGORITHM : 
1. Start
2.Declare an array of size n = 10000
3.Generate random numbers and store them in the array
4.Sort the array using qsort()
5.Select a key element from the array
6.Initialize:
 - low = 0
 - high = n - 1
7.Repeat until low <= high:
 - Find mid = low + (high - low) / 2
 - If arr[mid] == key, return index
 - If arr[mid] < key, set low = mid + 1
 - Else set high = mid - 1
8.If not found, return -1
9.Measure time using clock() before and after search
10.Display result and execution time
11.Stop

SOURCE CODE :
   ( BINARY SEARCH  )                                                                                                                                    
#include <stdlib.h>
#include <time.h>

// Function for Binary Search
int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

// Comparator function for Quick Sort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n = 10000;
    int arr;
    clock_t start, end;
    double cpu_time_used;

    srand(time(NULL));

    // 1. Generate 10,000 random numbers < 1000
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1000;
    }

    // 2. Sort the array (Quick Sort)
    qsort(arr, n, sizeof(int), compare);

    // 3. Pick a random key that is present in the array
    int key = arr[rand() % n];
    printf("Searching for key: %d\n", key);

    // 4. Measure time for Binary Search
    start = clock();
    int result = binarySearch(arr, 0, n - 1, key);
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    // Output results
    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found.\n");

    printf("Time taken by Binary Search: %f seconds\n", cpu_time_used);

    return 0;
}  


RESULT :

 The program successfully:
Generates random numbers and sorts them
Searches for a key using Binary Search
Displays the position of the element if found
Measures and prints the execution time
Binary Search is efficient with time complexity O(log n).
