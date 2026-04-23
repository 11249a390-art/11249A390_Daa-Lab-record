  FRACTIONAL_KNAPSACK

AIM :   To implement the Fractional Knapsack Problem using the Greedy Algorithm and find the maximum profit for a given knapsack capacity.

ALGORITHM :
   1. Start
2.Declare variables:
 - n → number of items
 - Arrays w[] for weight, p[] for profit
 - ratio[] for profit/weight ratio
 - capacity → knapsack capacity
 - profit = 0
3.Input number of items n
4.For each item:
 - Input weight w[i]
 - Input profit p[i]
 - Compute ratio = p[i] / w[i]
5.Input knapsack capacity
6.Sort items in descending order of profit/weight ratio
 - Swap ratios if needed
 - Swap corresponding weights and profits
7.For each item i = 0 to n-1:
 - If w[i] <= capacity:
 - Take full item
 - profit += p[i]
 - Reduce capacity -= w[i]
-Else:
 - Take fractional part
 - profit += ratio[i] * capacity
 - Break loop
8.Print maximum profit

SOURCE CODE :

#include <stdio.h> 
int main() { 
 int n, i, j; 
 float w[10], p[10], ratio[10], temp, capacity, profit = 0; 
 printf("Enter number of items: "); 
 scanf("%d", &n); 
 for (i = 0; i < n; i++) { 
 printf("Enter weight and profit of item %d: ", i+1); 
 scanf("%f %f", &w[i], &p[i]); 
 ratio[i] = p[i] / w[i]; 
 } 
 printf("Enter knapsack capacity: "); 
 scanf("%f", &capacity); 
 for (i = 0; i < n-1; i++) { 
 for (j = i+1; j < n; j++) { 
 if (ratio[i] < ratio[j]) { 
 temp = ratio[i]; ratio[i] = ratio[j]; ratio[j] = temp; 
 temp = w[i]; w[i] = w[j]; w[j] = temp
    temp = p[i]; p[i] = p[j]; p[j] = temp; 
 } 
 } 
 } 
 for (i = 0; i < n; i++) { 
 if (w[i] <= capacity) { 
 profit += p[i]; 
 capacity -= w[i]; 
 } else { 
 profit += ratio[i] * capacity; 
 break; 
 } 
 } 
 printf("Maximum profit = %.2f\n", profit); 
return 0;
}


RESULT :
The program successfully:
 - Sorts items based on profit-to-weight ratio.
 - Selects items using Greedy strategy.
 - Allows fractional selection of items.
 - Computes the maximum possible profit for the knapsack.





