#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5540;
unsigned char var_1 = (unsigned char)84;
short var_2 = (short)-3474;
unsigned long long int var_3 = 2018222201196410584ULL;
short var_5 = (short)9563;
unsigned int var_7 = 535710596U;
short var_12 = (short)-22459;
int zero = 0;
short var_13 = (short)-6691;
unsigned int var_14 = 3555981728U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
