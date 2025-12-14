#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)41829;
int var_8 = 81233289;
unsigned long long int var_9 = 13483159336449818355ULL;
_Bool var_10 = (_Bool)0;
long long int var_12 = -5244224955664522770LL;
unsigned char var_13 = (unsigned char)148;
unsigned long long int var_14 = 9306030682514253247ULL;
int zero = 0;
unsigned long long int var_16 = 326588265175254697ULL;
int var_17 = -581228456;
unsigned char var_18 = (unsigned char)48;
void init() {
}

void checksum() {
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
