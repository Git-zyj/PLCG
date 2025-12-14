#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 8526734752813682610LL;
short var_9 = (short)31617;
unsigned int var_10 = 1152702277U;
int zero = 0;
signed char var_15 = (signed char)-92;
unsigned short var_16 = (unsigned short)44408;
unsigned int var_17 = 2950696875U;
unsigned int var_18 = 2212376421U;
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
