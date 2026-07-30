#include <stdio.h>

int main() {
    int deep_work[7]; 
    int i;
    int max, min;
    float sum = 0; 
    float avg;

    
    printf("Enter Deep Work Hours for 7 Days:\n");
    for(i=0; i<7; i++) {
        scanf("%d", &deep_work[i]);
    }

    
    max = deep_work[0];
    min = deep_work[0];

    for(i=0; i<7; i++) {
       
        if(deep_work[i] > max) {
            max = deep_work[i];
        }
    }

    
    avg = sum / 7.0; 
    
  

    return 0;
}