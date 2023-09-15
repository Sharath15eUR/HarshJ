#include <stdio.h>  
void main()
{
int N, sum=0; 
scanf("%d", &N); /* The value of N is taken from the test cases */

/* Complete the program. Please use the printf statement given below to 
exactly match your output with the test cases.

printf("Sum = %d", sum);

*/
for(int i = 2; i <= N; i+=2){
  sum += i;
}
printf("Sum = %d", sum);
}