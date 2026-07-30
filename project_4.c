#include <stdio.h>
#include <string.h>
int main(){
   int  BPM[6];
   int i;
   for(i=1 ; i<6 ; i++)
   {
      printf("ENTER TOUR BPM :\n");
      scanf("%d", &BPM[i]);
   }
   for(i=0 ; i<6 ; i++)
   {
   if(BPM[i] - BPM[i-1] >= 20)
   {
    printf("ANXIETY SPIKE DETECTED \n");
   }else{
    printf("YOUR BP IS OKK \n");
   }
   }
 return 0;
}