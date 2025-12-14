#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 2063933117;
unsigned char var_9 = (unsigned char)141;
unsigned long long int var_15 = 1719134389317034888ULL;
int zero = 0;
unsigned long long int var_16 = 7715782698720580899ULL;
unsigned int var_17 = 3174816868U;
signed char var_18 = (signed char)88;
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
