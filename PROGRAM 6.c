FIRST_FIT_BIN_PACKING

AIM :  To implement the First Fit Bin Packing algorithm to allocate items into bins and display the remaining space in each bin.

 ALGORITHM : (First Fit Bin Packing)
1.Start
2.Declare variables:
 - n → number of items
 - Arrays item[] and bin[]
 - cap → capacity of each bin
3.Input number of items n
4.Input bin capacity cap
5.For each item i = 0 to n-1:
6.Read size of item
7.Initialize bin[i] = cap
 - For each item i = 0 to n-1:
 - For each bin j = 0 to n-1:
 - If bin[j] >= item[i]:
8.Place item in bin j
9.Update bin[j] = bin[j] - item[i]
10.Break inner loop
11.Display remaining space in each bin
12.Stop

SOURCE CODE :

#include <stdio.h> 
int main() { 
 int n, i, j; 
 float bin[10], item[10], cap; 
 printf("Enter number of items: "); 
 scanf("%d", &n); 
 printf("Enter bin capacity: "); 
 scanf("%f", &cap); 
 for (i = 0; i < n; i++) { 
 printf("Enter size of item %d: ", i+1); 
 scanf("%f", &item[i]); 
 bin[i] = cap; 
 } 
 for (i = 0; i < n; i++) { 
 for (j = 0; j < n; j++) { 
 if (bin[j] >= item[i]) { 
 bin[j] -= item[i]; 
 break; 
 } 
 } 
 } 
 printf("Remaining space in bins:\n"); 
 for (i = 0; i < n; i++) 
 printf("Bin %d: %.2f\n", i+1, bin[i]); 
return 0;
}


RESULT :
The program successfully:
Allocates items into bins using First Fit strategy.
Ensures each item is placed in the first available bin with enough space.
Displays remaining capacity of each bin.

