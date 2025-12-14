#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2689402972750073547ULL;
unsigned int var_8 = 3476803503U;
signed char var_11 = (signed char)-89;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = 948115952;
unsigned int var_17 = 2432631497U;
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
