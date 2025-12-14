#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7790882340008284446LL;
long long int var_5 = -5962585262464505360LL;
unsigned int var_7 = 2207967030U;
unsigned int var_9 = 3207567947U;
signed char var_12 = (signed char)-102;
int zero = 0;
signed char var_14 = (signed char)-87;
long long int var_15 = -2980463678020086714LL;
short var_16 = (short)5379;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
