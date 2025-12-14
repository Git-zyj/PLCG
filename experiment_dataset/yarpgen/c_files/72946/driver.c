#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3376995389788201563ULL;
short var_6 = (short)-17305;
unsigned short var_16 = (unsigned short)4488;
int zero = 0;
unsigned int var_20 = 1830273046U;
unsigned int var_21 = 1362532735U;
unsigned long long int var_22 = 10432658561515521810ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
