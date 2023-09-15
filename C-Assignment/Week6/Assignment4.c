#include<stdio.h>
 
int main() 
{
   int array[50], i, size;
 
   scanf("%d", &size); /*Accepts the size of array from test case data */

   for (i = 0; i < size; i++)
   scanf("%d", &array[i]); /* Read the array elements from the test case data */
for(int i = 0; i < size; i++){
  int x = array[i];
  for(int j = i+1; j < size; j++){
    if(x == array[j]){
      for(int k = j; k < size-1; k++){
        array[k] = array[k+1];
      }
      size--;
      j--;
    }
  }
}
for (i = 0; i < size; i++) {
      printf("%d\n", array[i]);
   }

}