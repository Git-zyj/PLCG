#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)12;
unsigned int var_2 = 929467338U;
int var_7 = 1628256526;
int var_9 = -2047781387;
int zero = 0;
unsigned int var_11 = 2542194492U;
int var_12 = 1261019629;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
