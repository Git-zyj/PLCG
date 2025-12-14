#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 12636198320822488174ULL;
long long int var_6 = -4817437738614839201LL;
unsigned int var_8 = 1811190464U;
unsigned char var_11 = (unsigned char)6;
int zero = 0;
unsigned int var_14 = 3171189028U;
signed char var_15 = (signed char)-31;
unsigned char var_16 = (unsigned char)233;
unsigned int var_17 = 81390052U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
