#include <stdint.h>

int main(void) {
    uint32_t *p = (uint32_t *)0x20000000;
    *p = 0xdeadbeef;
    while (1) {
        *p += 1;
    }

    return 0;
}