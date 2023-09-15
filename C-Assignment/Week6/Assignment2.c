#include<stdio.h>
 
int main() {
   int arr[20], i, n;
 
   scanf("%d", &n); /* Accepts the number of elements in the array */

  for (i = 0; i < n; i++) 
     scanf("%d", &arr[i]); /*Accepts the elements of the array */
for(int i = 0, j = (n-1); i < j; i++, j--){
  int t = arr[i];
  arr[i] = arr[j];
  arr[j] = t;
}
for (i = 0; i < n; i++) {
      printf("%d\n", arr[i]); // For printing the array elements 
   }
 
   return (0);
}