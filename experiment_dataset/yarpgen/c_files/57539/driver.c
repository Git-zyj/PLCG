#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)40;
unsigned long long int var_8 = 17313503869613080480ULL;
int var_9 = 740365329;
int var_13 = -778434824;
short var_14 = (short)-27935;
int zero = 0;
unsigned char var_17 = (unsigned char)53;
signed char var_18 = (signed char)0;
unsigned int var_19 = 1651976958U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
