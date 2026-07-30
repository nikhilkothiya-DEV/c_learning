#include <stdio.h>
#include <string.h>
int main(){
   char master_pass[] = "NEUROZ111";
   char input[80];
   for(int i = 0; i < 3; i++)
   {
       printf("ATTEMPT %d/3\n", i+1);
       printf("ENTER YOUR PASSWORD :");
       scanf("%s", input);
       if(strcmp(input, master_pass) == 0)
       {
           printf("ACCESS GRANTED\n");
           return 0; 
       }
       else
       {
           printf("ACCESS DENIED\n");
       }
   }
    printf("TOO MANY ATTEMPTS. DEVICE LOCKED.\n");
 return 0;
}