#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1198015801;
int var_7 = -545391455;
int zero = 0;
int var_19 = 1853601537;
_Bool var_20 = (_Bool)0;
long long int var_21 = -4398225597150229615LL;
unsigned char var_22 = (unsigned char)248;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
