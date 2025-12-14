#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1364280322;
short var_4 = (short)-30038;
unsigned long long int var_7 = 13882858135742823586ULL;
int var_11 = 1851370535;
unsigned long long int var_13 = 17976084541410601289ULL;
int zero = 0;
int var_16 = -462602173;
unsigned int var_17 = 362845345U;
short var_18 = (short)-12914;
long long int var_19 = 6000973352471745806LL;
unsigned long long int var_20 = 14336452255696926807ULL;
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
