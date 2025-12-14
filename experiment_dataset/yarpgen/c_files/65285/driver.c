#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7558528229932442982LL;
unsigned long long int var_3 = 6103407106704909919ULL;
long long int var_7 = 3419950229489588915LL;
int zero = 0;
signed char var_12 = (signed char)119;
signed char var_13 = (signed char)-42;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
