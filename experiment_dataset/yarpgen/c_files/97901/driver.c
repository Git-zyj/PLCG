#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_5 = 1100642501850484225ULL;
long long int var_9 = 8773986361965668175LL;
long long int var_13 = -8142840699629982349LL;
int zero = 0;
unsigned long long int var_20 = 5694733824962944546ULL;
short var_21 = (short)-16137;
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
