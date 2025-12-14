#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2734143637U;
unsigned short var_4 = (unsigned short)59697;
short var_17 = (short)20029;
int zero = 0;
unsigned int var_20 = 1620430721U;
unsigned short var_21 = (unsigned short)35148;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
