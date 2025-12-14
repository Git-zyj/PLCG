#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7822434951053723670LL;
short var_2 = (short)7840;
signed char var_7 = (signed char)-32;
unsigned long long int var_15 = 12937133599760742712ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -4177603933317083638LL;
void init() {
}

void checksum() {
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
