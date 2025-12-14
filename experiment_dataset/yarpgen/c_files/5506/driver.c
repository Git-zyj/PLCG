#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2502514042U;
unsigned int var_8 = 1115704649U;
unsigned int var_11 = 1392157302U;
unsigned int var_12 = 3034291008U;
unsigned int var_15 = 618325511U;
int zero = 0;
unsigned int var_17 = 1103283776U;
unsigned int var_18 = 289794553U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
