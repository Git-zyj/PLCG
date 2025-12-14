#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)16966;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 1829689275U;
short var_15 = (short)32212;
signed char var_18 = (signed char)-61;
int zero = 0;
int var_20 = 690589507;
unsigned int var_21 = 67013621U;
unsigned int var_22 = 1879429092U;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 2423686247834318200ULL;
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
