#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
long long int var_6 = -6421762950939804404LL;
long long int var_12 = 7986216094311447255LL;
unsigned short var_13 = (unsigned short)13455;
unsigned char var_15 = (unsigned char)198;
long long int var_16 = -8459079093219483541LL;
unsigned long long int var_17 = 7976029458555592823ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)80;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
