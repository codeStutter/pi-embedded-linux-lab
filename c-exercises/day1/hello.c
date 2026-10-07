#include <stdio.h>
#include <stdint.h>
int main(void) {
    printf("Hello Embedded World\n");

    printf("char:    %zu\n", sizeof(char));
    printf("short:   %zu\n", sizeof(short));
    printf("int:     %zu\n", sizeof(int));
    printf("long:    %zu\n", sizeof(long));
    printf("void *:   %zu\n", sizeof(void *));
    printf("uint8_t:  %zu\n", sizeof(uint8_t));
    printf("uint16_t: %zu\n", sizeof(uint16_t));
    printf("uint32_t: %zu\n", sizeof(uint32_t));
}
