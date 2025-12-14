#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51885;
long long int var_5 = 6981170968591536879LL;
unsigned int var_8 = 1870537614U;
int zero = 0;
unsigned short var_18 = (unsigned short)56505;
unsigned short var_19 = (unsigned short)39229;
void init() {
}

void checksum() {
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
