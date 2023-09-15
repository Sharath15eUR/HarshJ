#include<stdio.h>
int main()
{
    int a,b,c; 
    scanf("%d %d %d",&a, &b, &c); /*The length of three sides are entered from the test cases */
 
/* Complete the program. Copy and paste from the printf statements mentioned below wherever required for printing the outputs 

printf("Triangle is not possible");
printf("Right-angle Triangle");
printf("Isosceles Triangle");
printf("Equilateral Triangle");
printf("Scalene Triangle");

*/
if(a <= 0 || b <= 0 || c <= 0){
  printf("Triangle is not possible");
  return 0;
}
if(a==b && b==c & a==c)
  printf("Equilateral Triangle");
else if(c*c == (a*a + b*b))
  printf("Right-angle Triangle");
else if(a == b || b == c || c == a)
  printf("Isosceles Triangle");
else
  printf("Scalene Triangle");
return 0;
}