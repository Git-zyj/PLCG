#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5750895360467881349LL;
unsigned short var_3 = (unsigned short)7859;
unsigned long long int var_8 = 14270548996461875360ULL;
short var_9 = (short)1756;
signed char var_14 = (signed char)63;
signed char var_15 = (signed char)-8;
int zero = 0;
unsigned int var_16 = 1531477934U;
unsigned int var_17 = 1844330197U;
unsigned short var_18 = (unsigned short)8015;
void init() {
}

void checksum() {
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
