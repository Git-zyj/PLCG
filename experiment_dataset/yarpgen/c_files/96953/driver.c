#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 839766151;
_Bool var_1 = (_Bool)0;
short var_3 = (short)-15494;
long long int var_4 = 9118440114826274415LL;
unsigned long long int var_9 = 4737422148163221664ULL;
unsigned int var_10 = 1862908396U;
int var_11 = -1508625838;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)32022;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)44435;
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
