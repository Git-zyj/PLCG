#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2622153450290247238LL;
unsigned int var_5 = 1716323887U;
unsigned int var_12 = 3581795870U;
unsigned char var_14 = (unsigned char)55;
int zero = 0;
unsigned long long int var_15 = 6877067746365181537ULL;
int var_16 = 1605022983;
_Bool var_17 = (_Bool)0;
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
