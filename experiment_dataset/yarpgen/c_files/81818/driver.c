#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7104536691327915669LL;
unsigned short var_5 = (unsigned short)48402;
unsigned long long int var_8 = 4570767752101026424ULL;
long long int var_11 = -2301776339832793212LL;
unsigned long long int var_14 = 5342035085462283313ULL;
int var_15 = 101059703;
int zero = 0;
signed char var_17 = (signed char)-48;
signed char var_18 = (signed char)-117;
void init() {
}

void checksum() {
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
