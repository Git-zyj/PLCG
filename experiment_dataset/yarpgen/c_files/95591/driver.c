#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)92;
unsigned int var_6 = 321072922U;
int var_9 = -2059584471;
unsigned int var_13 = 1345616996U;
int zero = 0;
unsigned int var_20 = 1615642554U;
unsigned char var_21 = (unsigned char)121;
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
