#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)2882;
unsigned int var_6 = 3773736693U;
unsigned short var_17 = (unsigned short)40407;
int zero = 0;
unsigned int var_19 = 1527928894U;
signed char var_20 = (signed char)-67;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
