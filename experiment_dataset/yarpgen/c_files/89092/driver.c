#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-11020;
int var_7 = 1183009192;
int zero = 0;
unsigned char var_12 = (unsigned char)118;
long long int var_13 = -4378636692579044360LL;
unsigned int var_14 = 3178893521U;
long long int var_15 = -4853318084444752354LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
