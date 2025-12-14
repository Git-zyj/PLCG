#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_3 = (signed char)77;
long long int var_5 = -611518085789461447LL;
unsigned int var_7 = 440375181U;
int var_10 = -1366168070;
int zero = 0;
int var_11 = -1345698679;
unsigned long long int var_12 = 16056141390826708085ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
