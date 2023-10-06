#include <stdio.h>
int main()
{
    int a[100],i, n;
    scanf("%d",&n);  //Number of elements of the array is taken from the test case data 
   
   for (i=0; i<n; i++)
    {
        scanf("%d",a+i); // Input the array elements
    }
int *p = a;
for(i = 0; i < n; i++){
  for(int j = 0; j < n; j++){
    if(*(p+i) < *(p+j)){
      int temp = *(p+i);
      *(p+i) = *(p+j);
      *(p+j) = temp;
    }
  }
}
//   Printing sorted array in ascending order 
    for (i=0; i<n; i++)
    {
        printf("%d\n",*(a+i));
    }
    return 0;
   }