RANDOMIZED ALGORITHM (RANDOMIZED QUICK SORT)

AIM : 
   To implement Randomized Quick Sort algorithm to sort an array of elements using the divide and conquer approach with random pivot selection.

ALGORITHM :
If low < high then 
a. pi ← RandomParƟƟ on(A, low, high)
b. RandomizedQuickSort(A, low, pi-1) 
c. RandomizedQuickSort(A, pi+1, high) 
Algorithm: RandomPartition(A, low, high) 
1. r ← random number between low and high 
2. Swap A[r] and A[high] 
3. Return Partition(A, low, high) 
Algorithm: Partition(A, low, high) 
1. pivot ← A[high] 
2. i ← low - 1 
3. For j ← low to high-1 do 
 If A[j] ≤ pivot then 
 a. i ← i + 1 
 b. Swap A[i] and A[j] 
4. Swap A[i+1] and A[high] 
5. Return i + 1 

SOURCE CODE :
Randomized quick sort

#include <stdio.h>

#include <stdlib.h>

 

int partition(int a[], int low, int high) {

    int pivot = a[high], i = low - 1, j, temp;

    for (j = low; j < high; j++) {

        if (a[j] <= pivot) {

            i++;

            temp = a[i]; a[i] = a[j]; a[j] = temp;

        }

    }

    temp = a[i+1]; a[i+1] = a[high]; a[high] = temp;

    return i + 1;

}

int random_partition(int a[], int low, int high) {

    int r = low + rand() % (high - low + 1);

    int temp = a[r]; a[r] = a[high]; a[high] = temp;

    return partition(a, low, high);

}

void quicksort(int a[], int low, int high) {

    if (low < high) {

        int pi = random_partition(a, low, high);

        quicksort(a, low, pi - 1);

        quicksort(a, pi + 1, high);

    }

}

int main() {

    int n, i;

    int a[20];

    printf("Enter number of elements: ");

    scanf("%d", &n);

    printf("Enter elements:\n");

    for (i = 0; i < n; i++)

        scanf("%d", &a[i]);

    quicksort(a, 0, n-1);

    printf("Sorted array:\n");

    for (i = 0; i < n; i++)

        printf("%d ", a[i]);

    return 0;

}

RESULT :

The program successfully:
Takes an array of elements as input
Uses Randomized Quick Sort algorithm for sorting
Randomly selects a pivot to improve performance and reduce worst-case probability
Sorts the array in ascending order
Displays the sorted array as output







