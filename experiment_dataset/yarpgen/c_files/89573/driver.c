#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-11473;
unsigned long long int var_5 = 10427741641659782294ULL;
unsigned char var_12 = (unsigned char)237;
int zero = 0;
unsigned char var_15 = (unsigned char)102;
unsigned short var_16 = (unsigned short)43053;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
