#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)50721;
unsigned short var_11 = (unsigned short)39153;
unsigned int var_12 = 2941250123U;
unsigned long long int var_13 = 11312387901764682720ULL;
int zero = 0;
unsigned long long int var_17 = 16656645306056416933ULL;
short var_18 = (short)-25750;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
