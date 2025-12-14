#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned int var_12 = 700653120U;
unsigned int var_13 = 1399781366U;
unsigned int var_14 = 3084086101U;
unsigned char var_15 = (unsigned char)147;
unsigned long long int var_16 = 3905086727804634573ULL;
unsigned long long int var_17 = 7964526409715369541ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
