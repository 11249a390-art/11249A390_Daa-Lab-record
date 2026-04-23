PROGRAM 1 :   LINEAR SEARCH ON AN ARRAY

AIM :  To implement linear search using recursion and measure the time taken for execution.

***ALGORITHM : (Recursive Linear Search)***
 1.Start
 2.Initialize an array of size n with random values
 3.Generate a random key to search
 4.Call recursive function ls(array, begin, stop, key)
 5.In function:
 - If begin >= stop, print “Element not found”
 - Else if array[begin] == key, print position
 - Else call function again with begin + 1
 6.Record start time before function call
 7.Record end time after function completes
 8.Compute total time = (end - start) / CLOCKS_PER_SEC
 9.Print result
 10.Stop

SOURCE CODE :(Linear search)

#include<stdio.h> 
#include<time.h> 
#include<stdlib.h> 
void ls(int [], int, int,int); 
void ls(int a1[], int begin, int stop, int search) 
{ 
if(begin==stop) printf("Element not found"); 
else if(a[begin]==search) printf("element found @ position %d",begin+1); 
else ls(a1,begin+1,stop, search); 
} 
void main() 
{ 
int a[10000],n=10000, key, i; 
Clock_t start, end; 
for(i=0;i<n;i++) 
a[i]=rand()%1000; 
key=rand()%1000; 
start=clock(); 
ls(a, 0,n,key); 
end=clock(); 
printf("total time taken for execution is %lf" ,(double)start-(double)end); 
}

RESULT :
The program successfully:
Searches for a key using recursive linear search.
Displays whether the element is found or not.
Computes and prints the execution time.
