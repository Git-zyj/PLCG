#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1646319288U;
unsigned int var_2 = 1528958996U;
signed char var_3 = (signed char)83;
long long int var_6 = 3187958235020447331LL;
unsigned int var_8 = 4246750196U;
int zero = 0;
unsigned long long int var_11 = 8583359375335612195ULL;
unsigned long long int var_12 = 14377095405854678901ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
