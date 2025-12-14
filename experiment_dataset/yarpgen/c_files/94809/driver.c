#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-36;
unsigned char var_2 = (unsigned char)75;
signed char var_3 = (signed char)17;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)55;
unsigned char var_10 = (unsigned char)106;
unsigned int var_11 = 479981199U;
int zero = 0;
signed char var_15 = (signed char)49;
unsigned char var_16 = (unsigned char)24;
short var_17 = (short)-5186;
unsigned char var_18 = (unsigned char)6;
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
