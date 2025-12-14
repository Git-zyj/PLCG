#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3566328401U;
unsigned char var_3 = (unsigned char)28;
int var_4 = 1080912228;
unsigned int var_6 = 721490021U;
unsigned int var_9 = 857019515U;
int var_10 = 1382171317;
signed char var_11 = (signed char)96;
long long int var_12 = -7937390699801124398LL;
unsigned char var_13 = (unsigned char)218;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 1690036924U;
signed char var_16 = (signed char)-80;
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
