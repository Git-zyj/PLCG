#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2850612598U;
unsigned int var_6 = 2042597467U;
unsigned char var_11 = (unsigned char)239;
long long int var_14 = 4323904453840622092LL;
long long int var_15 = 2165261773460479538LL;
int zero = 0;
unsigned int var_20 = 1153621942U;
int var_21 = -491685728;
short var_22 = (short)15863;
unsigned long long int var_23 = 10301465275892806827ULL;
short var_24 = (short)-16396;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
