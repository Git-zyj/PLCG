#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7287981406859120460ULL;
_Bool var_3 = (_Bool)1;
unsigned char var_8 = (unsigned char)84;
unsigned long long int var_12 = 14544589107694415734ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)142;
_Bool var_15 = (_Bool)1;
int var_16 = 1240803590;
unsigned long long int var_17 = 11570487869495588797ULL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
