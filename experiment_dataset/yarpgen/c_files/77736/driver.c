#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14133;
long long int var_2 = -2263043441554109084LL;
unsigned short var_4 = (unsigned short)15782;
_Bool var_5 = (_Bool)0;
unsigned long long int var_11 = 14012950164344916921ULL;
unsigned int var_17 = 4275511659U;
unsigned int var_18 = 2198836485U;
int zero = 0;
signed char var_20 = (signed char)97;
unsigned long long int var_21 = 11256983503975089125ULL;
unsigned int var_22 = 1627938826U;
unsigned short var_23 = (unsigned short)33013;
int var_24 = 1004677203;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
