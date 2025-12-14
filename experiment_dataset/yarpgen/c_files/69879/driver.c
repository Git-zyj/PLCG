#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3530307869U;
unsigned int var_6 = 2199738802U;
unsigned long long int var_8 = 11257557429117406355ULL;
unsigned long long int var_9 = 10499382380480793742ULL;
unsigned short var_12 = (unsigned short)60713;
int zero = 0;
signed char var_13 = (signed char)-66;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-29562;
unsigned short var_16 = (unsigned short)62243;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
