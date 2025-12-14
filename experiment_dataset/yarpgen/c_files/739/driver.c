#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20075;
int var_3 = -1703995139;
int var_8 = 1151696359;
signed char var_12 = (signed char)-20;
int zero = 0;
unsigned short var_15 = (unsigned short)20510;
int var_16 = -70422712;
int var_17 = 19661291;
unsigned short var_18 = (unsigned short)36270;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
