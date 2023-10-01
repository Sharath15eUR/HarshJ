#include <stdio.h>
int main()
{
 int c, n, search,
 array[100];
 scanf("%d",&n); //number of elements in the array

 for (c = 0; c < n; c++)
 scanf("%d",&array[c]);

 scanf("%d", &search); //The element to search is read from test case.

/* Use the printf statements as below:
 printf("%d found at location %d.", search, variable_name);
 printf("Not found! %d isn't present in the list.", search);
*/
int pos = -1;
int L = 0, R = n;
while(L < R){
  int mid = (L + R)/2;
  if(array[mid] == search){
    pos = mid;
    break;
  }
  else if(array[mid] < search)
    L = mid;
  else if(array[mid] > search)
    R = mid;
}
if(pos == -1)
  printf("Not found! %d isn't present in the list.", search);
else
  printf("%d found at location %d.", search, pos+1);
return 0;
}