#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23161;
unsigned long long int var_3 = 5869288234292027266ULL;
int var_11 = 1735703081;
unsigned int var_12 = 3743824387U;
unsigned int var_14 = 1062862432U;
int zero = 0;
int var_16 = -794937164;
unsigned int var_17 = 142338811U;
unsigned long long int var_18 = 14293640712088461778ULL;
void init() {
}

void checksum() {
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
