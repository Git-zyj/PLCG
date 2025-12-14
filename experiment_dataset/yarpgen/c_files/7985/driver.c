#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1366751184;
unsigned char var_5 = (unsigned char)46;
unsigned long long int var_12 = 10792424257315928662ULL;
int zero = 0;
unsigned long long int var_15 = 1070092397064707188ULL;
unsigned char var_16 = (unsigned char)179;
long long int var_17 = -4649831526035799388LL;
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
