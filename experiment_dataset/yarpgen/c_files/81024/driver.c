#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1686980658272316094LL;
unsigned long long int var_11 = 9309371482802266251ULL;
unsigned char var_13 = (unsigned char)173;
signed char var_14 = (signed char)101;
int zero = 0;
unsigned long long int var_16 = 14292325612953157693ULL;
signed char var_17 = (signed char)48;
void init() {
}

void checksum() {
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
