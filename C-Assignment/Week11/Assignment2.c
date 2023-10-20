#include<stdio.h>
float func(float x);
int main()
{
  int n=10; //Taking n=10 sub intervals
  float a,b,integral; //integral is the integration result
  scanf("%f",&a); // initial limit taken from test case 
  scanf("%f",&b); // Final limit taken from test case

//Use the printf statement as printf("The integral is: %0.6f\n",integral);
float h = (b-a)/n;
float k = 0.0F;
integral = func(a) + func(b);
for(int i = 1; i <= n-1; i++){
  k = a + i * h;
  integral += 2 * func(k);
}
integral *= (h/2);
printf("The integral is: %0.6f\n",integral);
return 0;
}

float func(float x){
  return (x*x);
}