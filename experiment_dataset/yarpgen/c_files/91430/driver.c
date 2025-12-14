#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)60808;
long long int var_3 = -6285027622396018369LL;
unsigned long long int var_8 = 6412774719466491904ULL;
short var_11 = (short)29636;
unsigned short var_12 = (unsigned short)44845;
unsigned short var_15 = (unsigned short)14536;
int zero = 0;
long long int var_18 = -3881125570048172658LL;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 4448455775772285290ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
