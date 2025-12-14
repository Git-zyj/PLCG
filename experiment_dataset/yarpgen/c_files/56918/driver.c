#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2066075188U;
unsigned int var_6 = 4095849513U;
unsigned short var_8 = (unsigned short)36676;
unsigned long long int var_9 = 1731226275439204603ULL;
unsigned short var_10 = (unsigned short)57127;
unsigned short var_11 = (unsigned short)40168;
unsigned char var_12 = (unsigned char)118;
int zero = 0;
short var_14 = (short)-7622;
unsigned long long int var_15 = 8748234300475975217ULL;
int var_16 = 152963499;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
