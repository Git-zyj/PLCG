#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-7489;
unsigned int var_9 = 3256169001U;
unsigned short var_11 = (unsigned short)30640;
int zero = 0;
unsigned short var_12 = (unsigned short)10259;
short var_13 = (short)8762;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
