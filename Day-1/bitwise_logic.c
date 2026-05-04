#include <stdio.h>
#include <unistd.h> // to get the sleep function for the project to retun in an specified time 

int main() {
    // 'volitile ' this commad used here because the code should take the value updates not assumptions
    volatile unsigned char value = 0x00; 
    int pin = 3;

    printf("Starting Day 1 Bitwise Test...\n");

    while(1) {
        // toggeling using xor at pin3
        value ^= (1 << pin);

        // Check the state using the AND (&) mask
        if(value & (1 << pin)) {
            printf("LED Status: ON  [0x%02X]\n", value);
        } else {
            printf("LED Status: OFF [0x%02x]\n", value);
        }

        sleep(1); // 1hz rate
    }
    return 0;
}
