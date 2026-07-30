#include <stdio.h>
#include <string.h>
int main(){
   char inut[100];
    printf("ENTER YOUR INPUT :");
    scanf("%s", inut);
    int i;  
    for(i=0 ; inut[i] != '\0' ; i++)
    { 
        if(inut[i] == 'A' || inut[i] == 'E' || inut[i] == 'I' || inut[i] == 'O' || inut[i] == 'U' || inut[i] == 'a' || inut[i] == 'e' || inut[i] == 'i' || inut[i] == 'o' || inut[i] == 'u')
        {
           continue;
        }else
        {
            printf("%c", inut[i]);
        }
    }
 return 0;
}