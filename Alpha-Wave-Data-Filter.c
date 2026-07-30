#include <stdio.h>
int main() {
    int braindata[10] = {12,4,56,11,10,8,9,90,34,67};
    int i;
    int count =0;
    for(i=0 ; i<10 ; i++)
    {
        if(8<=braindata[i] && braindata[i]<=12)
        {
            count++;
           printf("\nYOUR ALPHA DATA IS HERE : %d", braindata[i]);
                
        }
        
    }
     printf("\nTOTAL DATA MATCHED IS : %d", count);
    return 0;
}