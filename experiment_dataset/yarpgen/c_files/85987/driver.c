#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3907707752U;
int var_12 = 869263169;
unsigned long long int var_15 = 6461753534521653221ULL;
int var_16 = -704046216;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 9025993651349417446ULL;
unsigned short var_19 = (unsigned short)65263;
unsigned short var_20 = (unsigned short)8207;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
