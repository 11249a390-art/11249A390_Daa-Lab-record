PERMUTATIONS PROBLEMS USING RECURSION 

  AIM :  To generate all permutations of a given set of elements using recursion.

ALGORITHM : 

1.Start
2.Read number of elements n
3.Read array elements
4.Call function perm(arr, start, stop)
5.In function:
  - If start == stop
  - Print the array (one permutation)
-Else
 - For each index i from start to stop-1:
 - Swap arr[start] and arr[i]
 - Call perm(arr, start + 1, stop)
 - Swap back (backtracking)
6.Repeat until all permutations are generated
7.Stop

SOURCE CODE :
void perm(int arr[], int start, int stop) 
{ 
int temp; 
If(start==stop) 
{ 
for (int i=0;i<stop;i++) printf(“\t%d”,arr[i]); 
printf(“\n”); 
} 
Else 
{ 
for(int i=start;i<stop;i++) 
{ 
temp=arr[i]; 
arr[i]=arr[start]; 
a[start]=temp; 
perm(arr,start+1;stop); 
temp=arr[i]; 
arr[i]=arr[start]; 
a[start]=temp; 
} 
} 
} 
void main() 
{ 
int n, I,a[10]; 
printf(“Enter total no element”); 
scanf(“%d”,&n); 
for(i=0;i<n;i++) 
scanf(“%d”,&a[i]); 
perm(a, 0,n); 
}


RESULT :
The program successfully:
Generates all possible permutations of the given elements.
Uses recursion with backtracking.
Produces n! (factorial) permutations.




