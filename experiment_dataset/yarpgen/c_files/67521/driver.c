#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8517474057133450624ULL;
unsigned long long int var_3 = 11996214110930142417ULL;
int zero = 0;
signed char var_13 = (signed char)92;
unsigned short var_14 = (unsigned short)26533;
short var_15 = (short)-5320;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
