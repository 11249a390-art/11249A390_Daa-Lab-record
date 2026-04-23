TRAVELLING SALESMAN PROBLEM 

AIM :  To implement the Travelling Salesman Problem (TSP) using recursion and find the minimum cost tour starting from a source city.

  ALGORITHM :
 1. Start
2.Declare variables:
 - n → number of cities
 - cost[][] → adjacency matrix for travel cost
 - visited[] → array to track visited cities
3.Input number of cities n
4.Input cost matrix of size n × n
5.Mark current city as visited
6.Initialize min_cost = ∞
7.For each city i from 0 to n-1:
 - If city i is not visited AND path exists (cost[city][i] != 0)
 - Recursively call tsp(i)
 - Add cost of moving from current city to i
 - Update min_cost with minimum value
8.Mark current city as unvisited (backtracking)
9.If no further path exists, return cost to return to starting city
10.Call tsp(0) starting from city 0
11.Print minimum tour cost
12.Stop


SOURCE CODE :
#include <stdio.h> 
#include <limits.h> 
int n, cost[10][10], visited[10]; 
int min(int a, int b) { 
 return (a < b) ? a : b; 
} 
int tsp(int city) { 
 int i, min_cost = INT_MAX, temp; 
 visited[city] = 1; 
 for (i = 0; i < n; i++) { 
 if (!visited[i] && cost[city][i] != 0) { 
 temp = cost[city][i] + tsp(i); 
 min_cost = min(min_cost, temp); 
 } 
 } 
 visited[city] = 0; 
 return (min_cost == INT_MAX) ? cost[city][0] : min_cost; 
} 
int main() { 
 int i, j; 
 printf("Enter number of cities: "); 
 scanf("%d", &n); 
 printf("Enter cost matrix:\n"); 
for (i = 0; i < n; i++) 
 for (j = 0; j < n; j++) 
 scanf("%d", &cost[i][j]); 
 printf("Minimum tour cost: %d\n", tsp(0)); 
 return 0;
} 


RESULT :
The program successfully:
Solves the Travelling Salesman Problem using recursion.
Explores all possible paths using backtracking.
Finds the minimum cost Hamiltonian cycle starting from city 0.
Demonstrates brute-force approach for optimization problems.

  
