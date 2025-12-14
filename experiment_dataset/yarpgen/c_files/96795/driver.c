#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)154;
unsigned short var_6 = (unsigned short)9366;
short var_8 = (short)-6211;
int var_9 = -537100577;
unsigned int var_11 = 4188194314U;
unsigned char var_12 = (unsigned char)182;
int zero = 0;
unsigned long long int var_15 = 13267710189854545476ULL;
unsigned short var_16 = (unsigned short)689;
short var_17 = (short)9304;
short var_18 = (short)-24051;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
