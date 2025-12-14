#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25414;
unsigned int var_3 = 3595065928U;
_Bool var_5 = (_Bool)0;
signed char var_11 = (signed char)-126;
unsigned long long int var_13 = 15158076579199641298ULL;
int zero = 0;
int var_14 = 1659719849;
unsigned short var_15 = (unsigned short)31037;
unsigned int var_16 = 1698738170U;
signed char var_17 = (signed char)-71;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
