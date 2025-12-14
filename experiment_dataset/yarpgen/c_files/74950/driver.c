#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1741387434U;
unsigned short var_6 = (unsigned short)29780;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 1533921765U;
unsigned char var_17 = (unsigned char)13;
unsigned short var_18 = (unsigned short)58546;
unsigned int var_19 = 3791220100U;
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
