#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 715934310U;
unsigned short var_2 = (unsigned short)6942;
unsigned long long int var_14 = 10751615890370236410ULL;
unsigned long long int var_15 = 1298455815816940361ULL;
int var_17 = 1956948843;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)22718;
int var_20 = -445025558;
unsigned short var_21 = (unsigned short)33891;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
