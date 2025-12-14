#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4135788586U;
long long int var_7 = -1340116453056246542LL;
unsigned long long int var_12 = 2031623145191145258ULL;
int zero = 0;
signed char var_20 = (signed char)77;
signed char var_21 = (signed char)34;
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
