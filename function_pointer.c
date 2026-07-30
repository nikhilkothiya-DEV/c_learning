#include <stdio.h>
#include <string.h>
 void warning1()
    {
        printf("SYSTEM NORMAL.\n");
    }
    void warning2()
    {
        printf("INTRUSION DETECTED.\n");
    }
    void warning3()
    {
        printf("SELF-DESTRUCT INITIATED.\n");
    }

int main() {
   

    void (*WARN_NO[])()= {warning1, warning2, warning3};
    int CHECK_NO = 1;
    WARN_NO[CHECK_NO]();


    return 0;
}