#include <stdio.h>

int main() {
    
    int vault_locked = 1; 
    int *p = &vault_locked;
    int **pp = &p;
    **pp = 0;
    if (vault_locked == 0) {
        printf("BEAST MODE: ACCESS GRANTED! Vault Unlocked.\n");
    } else {
        printf("FAILED: ACCESS DENIED. Vault is still locked.\n");
    }

    return 0;
}