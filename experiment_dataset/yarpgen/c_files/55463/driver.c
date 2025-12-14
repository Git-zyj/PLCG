#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 842997908U;
int var_6 = -1918740334;
unsigned short var_7 = (unsigned short)38257;
long long int var_10 = -529008164244724519LL;
int zero = 0;
unsigned int var_13 = 1943944769U;
unsigned int var_14 = 2316242190U;
unsigned short var_15 = (unsigned short)60327;
unsigned short var_16 = (unsigned short)56928;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
