#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2654994342U;
unsigned int var_1 = 4106723602U;
unsigned int var_2 = 1621718869U;
short var_3 = (short)10271;
int zero = 0;
unsigned int var_11 = 3983315254U;
short var_12 = (short)-16499;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
