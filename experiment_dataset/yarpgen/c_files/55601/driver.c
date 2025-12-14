#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1811796974U;
short var_3 = (short)-629;
long long int var_10 = 8223922743422967088LL;
signed char var_13 = (signed char)-98;
unsigned short var_14 = (unsigned short)28459;
int zero = 0;
int var_20 = -598522884;
long long int var_21 = -575280401841308343LL;
long long int var_22 = -2624813188317467829LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
