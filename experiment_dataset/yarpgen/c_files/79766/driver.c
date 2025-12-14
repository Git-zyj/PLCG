#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_11 = (_Bool)0;
unsigned int var_14 = 3192811817U;
unsigned int var_17 = 452208774U;
int zero = 0;
int var_19 = -909449217;
unsigned char var_20 = (unsigned char)10;
signed char var_21 = (signed char)80;
unsigned long long int var_22 = 8143382263395256277ULL;
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
