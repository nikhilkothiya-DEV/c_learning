#include <stdio.h>
int main() {
    float rawdata[4]= {1.2, 3.4, 5.6, 7.8};
    float sensordata[4];
   
    int i;
    for (i = 0; i < 4; i++) 
    {
        printf("SENSOR DATA :\n");
        scanf("%f", &sensordata[i]);
      if(sensordata[i] - rawdata[i] >= 0.5 || sensordata[i] - rawdata[i] <= -0.5)
      {
        printf("UNACCURATE DATA\n");
    } else {
        printf("DEVICE IS OKK\n");
    }  
    }
    
      
    return 0;
}