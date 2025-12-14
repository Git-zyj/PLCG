#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -576280310303509821LL;
unsigned char var_6 = (unsigned char)185;
long long int var_9 = 7353768998550023305LL;
unsigned int var_10 = 508836573U;
int zero = 0;
int var_15 = 2124135024;
long long int var_16 = -5742501252892629095LL;
unsigned long long int var_17 = 10253049001591665238ULL;
void init() {
}

void checksum() {
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
