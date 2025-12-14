#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)109;
unsigned long long int var_6 = 13565245166050935161ULL;
long long int var_9 = 6544951271499318295LL;
unsigned long long int var_11 = 11750871649664219770ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)244;
long long int var_14 = 7830365339990324629LL;
unsigned char var_15 = (unsigned char)240;
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
