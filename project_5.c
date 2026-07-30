#include <stdio.h>
#include <string.h>
int main(){
   char name[100];
    printf("ENTER YOUR NAME :");
    scanf("%s", name);
    int byear;
    printf("ENTER YOUR BIRTHYEAR :");
    scanf("%d", &byear);
    int i;
    for(i = strlen(name) - 1; i >= 0 ; i--)
    {
        printf("%c", name[i]);
    }
    printf("%d", byear);
 return 0;
}