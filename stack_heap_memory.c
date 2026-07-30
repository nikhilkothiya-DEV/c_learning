#include <stdio.h>
#include <stdlib.h>

int main() {
    int device_id = 999;
    int *p = &device_id;
    int *secret_keys = (int*)malloc(3*sizeof(int));
    *(secret_keys) = 10;
    *(secret_keys + 1) = 20;
    *(secret_keys + 2 ) = 30;
    printf("device address: %p\n", &device_id);
    printf("device id: %d\n", *p);
    printf("secret key 1: %d\n", *(secret_keys));
    printf("secret key 2: %d\n", *(secret_keys + 1));
    printf("secret key 3: %d\n", *(secret_keys + 2));

    free(secret_keys);

    secret_keys = NULL;
    return 0;
}