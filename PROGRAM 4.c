 Nth FIBONACCI (RECURSION & ITERATION)
 
   AIM : To compute the nth Fibonacci number using both recursive and iterative methods and compare their outputs.

   ALGORITHM :
   1.Start
   2.Declare variables:
  3.Integer n to store the number
  4.Variables for iterative method: a, b, c, i
  5.Display message:
    → “Enter n”
  6.Read value of n from user
 7.Define function fib_rec(n)
 8.Check if n <= 1
  - If true, return n
Else
  - Return fib_rec(n-1) + fib_rec(n-2)
8.Store result of recursive function
9.Define function fib_iter(n)
10.If n == 0, return 0
11.Initialize:
 - a = 0
 - b = 1
12.Loop from i = 2 to n
13.Compute c = a + b
 - Assign a = b
 - Assign b = c
13.End loop
14.Return b as result
15.Print result of recursive method
16.Print result of iterative method
17.Stop

SOURCE CODE :

include <stdio.h> 
int fib_rec(int n) { 
 if (n <= 1) 
 return n; 
 return fib_rec(n-1) + fib_rec(n-2); 
} 
int fib_iter(int n) { 
 int a = 0, b = 1, c, i; 
 if (n == 0) return 0; 
 for (i = 2; i <= n; i++) { 
 c = a + b; 
 a = b; 
 b = c; 
 } 
 return b; 
} 
int main() { 
 int n; 
 printf("Enter n: "); 
 scanf("%d", &n); 
 printf("Recursive Fibonacci: %d\n", fib_rec(n)); 
 printf("Iterative Fibonacci: %d\n", fib_iter(n)); 
return 0;
} 

RESULT : 
The program successfully:
Computes Fibonacci numbers using both recursion and iteration
Produces the same output for both methods
Demonstrates that:
Recursive method has higher time complexity (O(2ⁿ))
Iterative method is efficient (O(n))
