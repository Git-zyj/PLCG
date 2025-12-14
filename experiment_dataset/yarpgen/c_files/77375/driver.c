#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-57;
short var_2 = (short)-3298;
unsigned int var_3 = 264292644U;
short var_5 = (short)-28730;
unsigned char var_6 = (unsigned char)120;
unsigned short var_7 = (unsigned short)19703;
long long int var_9 = -6257031715567559587LL;
unsigned long long int var_11 = 2751903505602941359ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_15 = -8471201540868472027LL;
unsigned int var_16 = 1886485239U;
void init() {
}

void checksum() {
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
