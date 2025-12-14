#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -585802303;
_Bool var_5 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 9816313934194595102ULL;
unsigned short var_16 = (unsigned short)10522;
int var_17 = -1776214840;
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
