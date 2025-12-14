#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -9002446559306264639LL;
long long int var_6 = -8765160249854866884LL;
unsigned int var_8 = 3785787319U;
int var_9 = 1786386888;
_Bool var_11 = (_Bool)1;
unsigned int var_13 = 1324997840U;
_Bool var_14 = (_Bool)0;
short var_15 = (short)20027;
int var_16 = -1096431119;
unsigned short var_17 = (unsigned short)47229;
int zero = 0;
unsigned long long int var_18 = 14528304377147293005ULL;
unsigned int var_19 = 2001121536U;
unsigned int var_20 = 52920952U;
void init() {
}

void checksum() {
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
