#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12236482036104770723ULL;
unsigned char var_3 = (unsigned char)210;
unsigned long long int var_7 = 16093065097554655762ULL;
int var_8 = 1030979995;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)48;
short var_17 = (short)-7626;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
