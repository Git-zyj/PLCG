#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)60;
unsigned short var_6 = (unsigned short)58417;
unsigned long long int var_8 = 10917498937847748859ULL;
int var_16 = -1550889608;
long long int var_17 = 350178039278835031LL;
unsigned long long int var_18 = 14626461959337037542ULL;
int zero = 0;
int var_19 = 610487270;
_Bool var_20 = (_Bool)0;
long long int var_21 = -1852949875916996326LL;
void init() {
}

void checksum() {
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
