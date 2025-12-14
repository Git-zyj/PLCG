#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2538964330U;
unsigned int var_6 = 4067298824U;
unsigned char var_9 = (unsigned char)211;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-29916;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)80;
short var_15 = (short)-27404;
unsigned int var_16 = 1119300874U;
unsigned int var_17 = 2843866098U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
