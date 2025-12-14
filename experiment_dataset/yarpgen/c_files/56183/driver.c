#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_3 = -694781110;
short var_10 = (short)7042;
long long int var_11 = -4064868887123838609LL;
unsigned short var_16 = (unsigned short)55527;
int zero = 0;
unsigned long long int var_19 = 16858889602918846231ULL;
unsigned int var_20 = 2335368528U;
unsigned short var_21 = (unsigned short)29180;
unsigned long long int var_22 = 8894050138920998006ULL;
unsigned long long int var_23 = 8917596752100192167ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
