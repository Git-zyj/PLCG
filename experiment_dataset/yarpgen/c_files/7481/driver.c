#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3284492314U;
unsigned short var_3 = (unsigned short)28774;
unsigned int var_11 = 2402118881U;
int zero = 0;
unsigned int var_13 = 2913539631U;
unsigned short var_14 = (unsigned short)56623;
void init() {
}

void checksum() {
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
