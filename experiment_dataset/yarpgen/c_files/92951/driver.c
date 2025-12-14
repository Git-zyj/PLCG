#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -5682925808043036508LL;
unsigned int var_9 = 4217828307U;
_Bool var_10 = (_Bool)0;
long long int var_15 = 3391174492499039834LL;
unsigned int var_17 = 3543276965U;
int zero = 0;
int var_18 = -1680758782;
unsigned int var_19 = 437844585U;
unsigned int var_20 = 982187656U;
short var_21 = (short)-6511;
short var_22 = (short)28811;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
