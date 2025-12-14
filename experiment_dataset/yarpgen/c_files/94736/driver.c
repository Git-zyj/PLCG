#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)1;
long long int var_8 = -5538026837053206668LL;
unsigned long long int var_16 = 10043002254880196505ULL;
int var_19 = 1593242258;
int zero = 0;
unsigned int var_20 = 260161344U;
unsigned int var_21 = 1369778398U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
