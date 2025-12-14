#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3559777935U;
int var_10 = -508861555;
short var_16 = (short)-2831;
unsigned int var_18 = 1336059003U;
int zero = 0;
short var_20 = (short)335;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 1143460436U;
unsigned char var_23 = (unsigned char)98;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
