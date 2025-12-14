#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -843079702;
unsigned char var_5 = (unsigned char)4;
unsigned short var_9 = (unsigned short)39170;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-78;
short var_13 = (short)-29930;
int zero = 0;
short var_14 = (short)-23745;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-30245;
unsigned int var_17 = 276816596U;
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
