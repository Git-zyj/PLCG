#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned int var_7 = 1832155124U;
unsigned long long int var_10 = 3040990983656119258ULL;
long long int var_11 = -2141151053905180795LL;
int var_12 = -1012136164;
int zero = 0;
unsigned char var_13 = (unsigned char)212;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1553150362U;
void init() {
}

void checksum() {
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
