#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2009844870099498582LL;
long long int var_10 = 6278092558209356801LL;
int zero = 0;
unsigned int var_14 = 1421351001U;
signed char var_15 = (signed char)80;
int var_16 = -634728614;
unsigned short var_17 = (unsigned short)49589;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
