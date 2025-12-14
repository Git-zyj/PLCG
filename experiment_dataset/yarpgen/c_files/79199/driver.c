#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 2469802111U;
int var_11 = 1949896032;
long long int var_12 = -375511849431137384LL;
signed char var_14 = (signed char)-16;
int zero = 0;
signed char var_16 = (signed char)8;
unsigned char var_17 = (unsigned char)212;
void init() {
}

void checksum() {
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
