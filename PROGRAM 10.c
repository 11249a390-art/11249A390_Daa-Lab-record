NETWORK FLOW (FORD - FULKERSON)

AIM :  
      To implement a simplified Maximum Flow problem in a network using a capacity matrix and compute the total flow from source to sink.

ALGORITHM :

1. Start 
2. flow ← 0
3. For i ← 0 to n-1 do 
 f ← minimum(cap[s][i], cap[i][t])
 flow ← flow + f 
 End For 
4. Print "Maximum flow =", flow 
5. Stop 

SOURCE CODE :
  
include <stdio.h> 
int min(int a, int b) { 
 return (a < b) ? a : b; 
} 
int main() { 
 int n, i, j, s, t; 
 int cap[10][10], flow = 0; 
 printf("Enter number of vertices: "); 
 scanf("%d", &n); 
 printf("Enter capacity matrix:\n"); 
 for (i = 0; i < n; i++) 
 for (j = 0; j < n; j++) 
 scanf("%d", &cap[i][j]); 
 printf("Enter source and sink: "); 
 scanf("%d %d", &s, &t); 
 for (i = 0; i < n; i++) { 
 int f = min(cap[s][i], cap[i][t]); 
 flow += f; 
 } 
 printf("Maximum flow: %d\n", flow); 
return 0;
}

RESULT : 
    The program successfully:

Reads a capacity matrix of a directed graph
Takes source (s) and sink (t) vertices

Computes flow using a simplified approach:

f=min(cap[s][i],cap[i][t])
Calculates the maximum possible flow from source to sink
Displays the total flow value.








