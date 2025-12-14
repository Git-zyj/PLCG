#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10562;
short var_2 = (short)-31648;
unsigned int var_9 = 3257438599U;
unsigned int var_14 = 3523186230U;
int zero = 0;
short var_15 = (short)-24541;
signed char var_16 = (signed char)-52;
unsigned short var_17 = (unsigned short)59201;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
