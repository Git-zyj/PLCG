#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1959185658U;
unsigned int var_9 = 3371525899U;
unsigned int var_10 = 2716634594U;
unsigned int var_15 = 916341583U;
unsigned int var_16 = 27982992U;
unsigned long long int var_17 = 16479378883392640240ULL;
unsigned long long int var_18 = 3989562692992359141ULL;
int zero = 0;
unsigned int var_19 = 1272554471U;
unsigned long long int var_20 = 18059199766605680643ULL;
unsigned int var_21 = 884816392U;
unsigned int var_22 = 1999903331U;
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
