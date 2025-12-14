#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_3 = 2693319771U;
unsigned short var_4 = (unsigned short)5211;
long long int var_6 = 3907584559478299338LL;
_Bool var_7 = (_Bool)0;
int var_8 = -810190495;
long long int var_9 = -8432698762093340577LL;
_Bool var_10 = (_Bool)0;
long long int var_11 = 1554987922679205441LL;
signed char var_12 = (signed char)-121;
int zero = 0;
int var_14 = 1642025188;
long long int var_15 = 8866233031060474435LL;
unsigned int var_16 = 1364975625U;
unsigned int var_17 = 3207246095U;
int var_18 = 1095701870;
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
