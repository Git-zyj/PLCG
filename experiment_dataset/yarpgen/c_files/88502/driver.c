#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1465252001U;
int var_1 = 952484593;
int var_3 = 1735436950;
unsigned long long int var_4 = 8390879075645047969ULL;
int var_5 = -659236959;
_Bool var_7 = (_Bool)1;
long long int var_8 = -8544089501682437330LL;
unsigned char var_11 = (unsigned char)152;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)9;
unsigned long long int var_14 = 14854560009231636611ULL;
int zero = 0;
long long int var_15 = -7042095403801958118LL;
long long int var_16 = -9064073734196443857LL;
_Bool var_17 = (_Bool)1;
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
