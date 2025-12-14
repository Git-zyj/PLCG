#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 282793059U;
unsigned int var_1 = 3449254936U;
unsigned int var_3 = 268073174U;
unsigned int var_10 = 788627322U;
short var_11 = (short)-32193;
short var_13 = (short)32344;
int zero = 0;
short var_19 = (short)-6452;
unsigned int var_20 = 1846739672U;
void init() {
}

void checksum() {
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
