#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1037064853;
long long int var_1 = -6881605691785203254LL;
unsigned int var_4 = 1604740310U;
int zero = 0;
long long int var_10 = 4098516492962280822LL;
unsigned char var_11 = (unsigned char)30;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
