#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned long long int var_11 = 10740675985917028503ULL;
unsigned char var_13 = (unsigned char)6;
long long int var_16 = 4653798979734928070LL;
unsigned int var_17 = 4156811188U;
int var_18 = 2041101258;
int zero = 0;
unsigned int var_19 = 3181077669U;
unsigned short var_20 = (unsigned short)46447;
void init() {
}

void checksum() {
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
