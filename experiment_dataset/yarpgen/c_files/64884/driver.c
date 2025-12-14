#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 7089560632563306674LL;
unsigned short var_8 = (unsigned short)13892;
int zero = 0;
short var_16 = (short)-21124;
unsigned short var_17 = (unsigned short)22234;
unsigned int var_18 = 1221547745U;
int var_19 = 730107171;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
