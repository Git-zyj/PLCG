#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)47;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 3564879668U;
unsigned char var_6 = (unsigned char)88;
unsigned char var_7 = (unsigned char)36;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 482364987733218442ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)39160;
unsigned int var_13 = 1973176592U;
unsigned int var_14 = 3830411286U;
unsigned char var_15 = (unsigned char)26;
unsigned short var_16 = (unsigned short)39272;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
