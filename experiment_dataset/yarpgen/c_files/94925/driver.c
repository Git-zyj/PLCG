#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9987;
unsigned char var_2 = (unsigned char)174;
signed char var_3 = (signed char)-68;
unsigned short var_9 = (unsigned short)28811;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 4004714529U;
short var_13 = (short)3747;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 1437411719U;
short var_17 = (short)-24907;
short var_18 = (short)-5496;
short var_19 = (short)-29942;
unsigned short var_20 = (unsigned short)61203;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
