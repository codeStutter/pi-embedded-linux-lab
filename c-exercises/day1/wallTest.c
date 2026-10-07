#include <stdio.h>
#include <stdint.h>
int main(void) {

    int count = 7890;
    int unused = 5;
    long big = 100000L;
    unsigned int reg = 0xFFFFFFFF;
    uint8_t x = 255;
    
    printf("count=%d\n", count);
    printf("unused=%d\n", unused);
    printf("big=%ld\n", big);
    printf("reg=%d\n", reg);
    printf("reg=%u\n", reg);
    printf("%u\n", x);
    printf("%d\n", x);
    printf("%#x\n", x);
    printf("%#o\n", x);
    x++;
    printf("%u\n", x);
    return 0;
}