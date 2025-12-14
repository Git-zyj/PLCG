#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39699;
long long int var_8 = 8107650807606136158LL;
long long int var_10 = 7951539989856792083LL;
unsigned int var_11 = 3346422093U;
signed char var_12 = (signed char)19;
unsigned long long int var_13 = 4498164541417128515ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = 8787756804666317550LL;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)34;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
