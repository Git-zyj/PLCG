#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12871192575993796078ULL;
unsigned int var_3 = 4039224707U;
unsigned int var_5 = 1012267961U;
signed char var_6 = (signed char)-122;
unsigned int var_9 = 2621752174U;
unsigned short var_10 = (unsigned short)54647;
int zero = 0;
unsigned short var_15 = (unsigned short)36103;
short var_16 = (short)-29693;
void init() {
}

void checksum() {
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
