#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 4369372867940435863ULL;
unsigned int var_11 = 2834113886U;
long long int var_12 = 2570068278229448306LL;
int zero = 0;
signed char var_15 = (signed char)-47;
short var_16 = (short)14711;
void init() {
}

void checksum() {
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
