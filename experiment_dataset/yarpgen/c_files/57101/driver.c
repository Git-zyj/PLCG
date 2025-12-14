#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2930813326U;
unsigned long long int var_5 = 14250606923905219578ULL;
unsigned short var_10 = (unsigned short)43437;
unsigned int var_11 = 1779449645U;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 14511343613166146291ULL;
long long int var_16 = 63170673765718317LL;
long long int var_17 = -7125271276330704224LL;
void init() {
}

void checksum() {
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
