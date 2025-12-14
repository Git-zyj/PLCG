#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)32652;
int var_3 = -1178292910;
int var_14 = 1398228839;
int zero = 0;
long long int var_15 = 1648224385386779362LL;
unsigned short var_16 = (unsigned short)51561;
unsigned char var_17 = (unsigned char)129;
long long int var_18 = -1273591390191781301LL;
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
