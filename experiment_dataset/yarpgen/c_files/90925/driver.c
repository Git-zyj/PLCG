#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1455486137U;
unsigned int var_4 = 2401349467U;
unsigned int var_5 = 440298602U;
long long int var_6 = -8134619337377319794LL;
unsigned int var_8 = 3868455603U;
int var_10 = -302591081;
int zero = 0;
long long int var_12 = 1637919994142546782LL;
long long int var_13 = 7996478810493589342LL;
unsigned int var_14 = 4022375630U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
