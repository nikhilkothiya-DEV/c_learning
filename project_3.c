#include <stdio.h>

int main(){
    int battery = 100;
    int i;
    while(battery > 0) 
    {
        printf("\n1 FOR BLUETOOTH \n2 FOR BRAIN SENSOR \n3 FOR SLEEP MODE\nENTER CHOICE: ");
        scanf("%d", &i);
        
        switch(i)
        {
            case 1:
                
                battery = battery - 15; 
                printf("BATTERY IS : %d\n", battery);
                break;
            case 2:
                battery = battery - 10;
                printf("BATTERY IS : %d\n", battery);
                break;
            case 3:
                battery = battery - 1;
                printf("BATTERY IS : %d\n", battery);
                break;
            default:
                printf("INVALID INPUT!\n");
        }
    }
    printf("\nDEVICE DEAD. PLEASE RECHARGE.\n");
    return 0;
}