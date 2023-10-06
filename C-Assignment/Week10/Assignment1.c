#include<stdio.h>
float fun (float x); //Function fun returns the function value of f(x)
void bisection (float *x, float a, float b, int *itr); // This function computes the root of f(x) using bisection method

int main ()
{
    int itr = 0, maxmitr=10;
    float x, a=1.0, b=2.0, allerr, x1; // x is the value of root in each iteration, x1 is the final value of the root 
   // a and b are the initial range for calculating the root using bisection method
      
scanf("%f", &allerr);  // allerr is the allowable error taken from test case data 
    bisection (&x, a, b, &itr);

/* Use the printf statement as given below to print the root
printf("Root = %1.4f\n", x1); */
do{
  if(fun(a)*fun(x) < 0)
    b = x;
  else
    a = x;
  bisection(&x1, a, b , &itr);
  float err = (x1-x);
  if(err < 0.0)
     err *= (-1);
  if(err < allerr){
    printf("Root = %1.4f\n", x1);
    return 0;
  }
  x = x1;
}while(itr < maxmitr);

return 0;
}
float fun(float x){
  return ((2*x*x*x) - (3*x) - 5);
}
void bisection(float *x, float a, float b, int *itr){
  *x = (a+b)/2;
  ++(*itr);
}