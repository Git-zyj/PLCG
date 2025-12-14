#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-31925;
unsigned short var_10 = (unsigned short)14668;
unsigned short var_16 = (unsigned short)56553;
int zero = 0;
unsigned short var_17 = (unsigned short)36989;
short var_18 = (short)-26891;
short var_19 = (short)14622;
void init() {
}

void checksum() {
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
