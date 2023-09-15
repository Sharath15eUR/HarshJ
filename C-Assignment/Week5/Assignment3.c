#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N); /* The value of N is taken from the test case data */
 
/* Complete the code.
Use the printf statements as below
printf("%d is a number that can be expressed as power of 2.",N);
printf("%d cannot be expressed as power of 2.",N);
*/
int i = 2;
while(i < N){
  i *= 2;
}
if(i == N)
  printf("%d is a number that can be expressed as power of 2.",N);
else
  printf("%d cannot be expressed as power of 2.",N);
return 0;
}