#include <stdio.h>
#include <string.h>
int main(){
   char input[100];
   printf("ENTER YOUR INPUT :");

   scanf("%s", input);
    int i;
    for(i=0 ; input[i] != '\0' ; i++)
    {
    if(input[i]=='0')
    {
        printf("SILENCE\n");
    }
    else if (input[i]=='1')
    {
        printf("BUZZ\n");
    }
    else
    {
        printf("UNKNOWN\n");
    }
    }
 return 0;
}