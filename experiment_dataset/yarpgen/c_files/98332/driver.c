#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)30872;
long long int var_12 = -3322903689668110227LL;
unsigned short var_14 = (unsigned short)29365;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2108906150U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
