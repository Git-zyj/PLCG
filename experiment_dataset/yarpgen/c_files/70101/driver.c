#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2105692639822783201ULL;
unsigned int var_2 = 3776425767U;
unsigned int var_3 = 2132988573U;
unsigned int var_6 = 4284478877U;
int var_8 = -1596502678;
unsigned int var_9 = 3115986964U;
int var_14 = 1062754920;
int zero = 0;
unsigned long long int var_15 = 15282939124962113801ULL;
unsigned int var_16 = 862399496U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
