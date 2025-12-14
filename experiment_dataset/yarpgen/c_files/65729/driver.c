#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3570045426675682678LL;
unsigned char var_2 = (unsigned char)192;
short var_3 = (short)-31093;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)126;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 16747827045396632572ULL;
unsigned int var_17 = 4122239974U;
unsigned int var_18 = 3908201077U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
