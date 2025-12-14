#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1101825530052577940ULL;
_Bool var_4 = (_Bool)1;
long long int var_6 = -6159256011605198474LL;
long long int var_7 = -5497967052954010160LL;
long long int var_9 = -6218837389566267612LL;
short var_10 = (short)6905;
int zero = 0;
signed char var_11 = (signed char)-44;
unsigned long long int var_12 = 12740536232256618138ULL;
int var_13 = 2026854618;
unsigned short var_14 = (unsigned short)39494;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
