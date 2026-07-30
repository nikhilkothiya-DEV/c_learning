#include <stdio.h>
#include <string.h>
int main(){
  int max ;
    printf("ENTER YOUR MAXIMUM VALUE :");
    scanf("%d", &max);
    int values[10] = {200 , 120 , 130 , 150 , 90 , 80 , 110 , 140 , 160 , 170};
    int i;
    for(i=0 ; i<10 ; i++)
    {
        if(values[i] <= max)
        {
            printf("%d\n", values[i]);
        }
    }

 return 0;
}