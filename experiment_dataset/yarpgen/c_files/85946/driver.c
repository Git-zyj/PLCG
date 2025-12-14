#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-42;
long long int var_1 = 267196257462509147LL;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 3754500152U;
int var_9 = -1690484574;
short var_12 = (short)22721;
unsigned long long int var_13 = 10945101412052230378ULL;
unsigned char var_14 = (unsigned char)35;
int zero = 0;
int var_15 = -104381801;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)35597;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
