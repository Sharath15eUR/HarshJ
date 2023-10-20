#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; 
    float *element;

    scanf("%d", &n); //Total number of elements

    // Allocate the memory for 'n' number of elements. 
    //Then take the elements as input from test data
element = (float*)calloc(n, sizeof(float));
for(int i = 0; i < n; i++){
  scanf("%f",(element+i));
}
float max = *element;
for(int i = 1; i < n; i++){
  if(max < *(element + i))
    max = *(element + i);
}
printf("Largest element = %5.2f",max);
return 0;
}