#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 948087955U;
short var_3 = (short)4401;
unsigned short var_4 = (unsigned short)2168;
unsigned int var_5 = 3856452602U;
unsigned int var_6 = 1510066189U;
unsigned int var_7 = 1539666845U;
unsigned long long int var_10 = 5478968454821833591ULL;
long long int var_11 = -7050097099151259940LL;
unsigned long long int var_12 = 4043426171739739309ULL;
unsigned short var_13 = (unsigned short)60579;
short var_17 = (short)-7395;
int zero = 0;
unsigned short var_19 = (unsigned short)31266;
unsigned long long int var_20 = 1378481854199981217ULL;
unsigned long long int var_21 = 16275378374976752705ULL;
unsigned long long int var_22 = 6033378505383905461ULL;
unsigned int var_23 = 1733181338U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
