#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2070993417161036301LL;
unsigned long long int var_9 = 7994774754708591048ULL;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)6;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = 235291069;
int var_17 = -1210680851;
long long int var_18 = -2376183532615986778LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
