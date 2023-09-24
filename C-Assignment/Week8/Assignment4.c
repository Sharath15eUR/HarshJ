#include<stdio.h>
#include<string.h>

void reverse(char[], int, int);
    int main()
    {
        char str1[20];
        scanf("%s", str1); //The string is taken as input form the test data. 
     
/* Complete the program to print the string in reverse order using the function
void reverse(char[], int, int);
Use the printf statement as
printf("The string after reversing is: %s\n", str1); 
You can use different variable also.
*/
reverse(str1, 0 , 0);
printf("The string after reversing is: %s\n", str1);
return 0;
}
void reverse(char str[], int a, int b){
  int i = 0;
  int n = 0;
  while(str[i] != '\0'){
    i++;
    n++;
  }
  i = 0;
  while(i < (n/2)){
    char ch = str[i];
    str[i] = str[n-i-1];
    str[n-i-1] = ch;
    i++;
  }
}