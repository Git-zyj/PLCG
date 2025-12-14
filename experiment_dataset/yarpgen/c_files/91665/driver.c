#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)3;
unsigned short var_3 = (unsigned short)33227;
unsigned short var_4 = (unsigned short)48027;
short var_5 = (short)10746;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 17634243580808415332ULL;
short var_9 = (short)23531;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-9526;
int zero = 0;
unsigned short var_14 = (unsigned short)34831;
unsigned int var_15 = 3123563671U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
