#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4219451095328110123ULL;
unsigned short var_1 = (unsigned short)38924;
short var_4 = (short)25612;
signed char var_7 = (signed char)75;
unsigned char var_11 = (unsigned char)88;
int zero = 0;
unsigned long long int var_13 = 9181325005240551236ULL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-9079;
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
