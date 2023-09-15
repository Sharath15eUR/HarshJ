#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]={0},substr[100][100]={0}; 
//str[100] is for storing the sentence and substr[50][50] is for storing each word.
    
scanf("%[^\n]s", str); //Accepts the sentence from the test case data.

/* Complete the program to get the desired output.
The print statement should be as below
 
printf("Largest Word is: %s\nSmallest word is: %s\n", -------,--------);

*/
int len = strlen(str);
int k = 0;
for(int i = 0; i < len; i++){
    //printf("i = %d\n", i);
  for(int j = 0; j < len; j++){
      //printf("j = %d\n", j);
    if(str[i+j] == ' ' || str[i+j] == '.' || str[i+j] == '\0' || str[i+j] == '\n'){
        //printf("%c",str[i+j]);
        //printf("%d %d %d\n", i, j,k);
      i += j;
      k++;
      break;
    }
    substr[k][j] = str[i+j];
  }
}
int max_len = strlen(substr[0]);
int max_ind = 0;
int min_len = strlen(substr[0]);
int min_ind = 0;
for(int i = 1; i < k; i++){
    int curr_len = strlen(substr[i]);
    if(max_len < curr_len){
        max_ind = i;
        max_len = curr_len;
    }
     if(min_len > curr_len){
        min_ind = i;
        min_len = curr_len;
    }
}
printf("Largest Word is: %s\nSmallest word is: %s\n", substr[max_ind], substr[min_ind]);
return 0;
}