#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6482337371216532273LL;
long long int var_3 = 116159062596426804LL;
int zero = 0;
long long int var_15 = -4513202133618552095LL;
long long int var_16 = -7205416016318521667LL;
long long int var_17 = 8303931162322782832LL;
long long int var_18 = 5900261068651257805LL;
long long int var_19 = -1364786694952257556LL;
long long int var_20 = -5359311255134097600LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
