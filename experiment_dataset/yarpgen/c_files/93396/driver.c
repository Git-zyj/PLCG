#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2986305392U;
int var_1 = -1844176529;
unsigned char var_4 = (unsigned char)172;
_Bool var_8 = (_Bool)1;
unsigned char var_11 = (unsigned char)55;
int zero = 0;
unsigned int var_12 = 4135137286U;
unsigned short var_13 = (unsigned short)963;
long long int var_14 = -2526798550636979100LL;
unsigned short var_15 = (unsigned short)65462;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
