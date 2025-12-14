#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -892518981;
_Bool var_4 = (_Bool)0;
unsigned long long int var_9 = 6607009396260110227ULL;
int var_10 = 2010228232;
signed char var_12 = (signed char)126;
unsigned long long int var_13 = 5070367539011412720ULL;
long long int var_15 = 4797777862608841559LL;
int var_17 = 1177032819;
int zero = 0;
unsigned long long int var_19 = 5255727695147191925ULL;
unsigned int var_20 = 483382389U;
int var_21 = -2050589719;
signed char var_22 = (signed char)25;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
