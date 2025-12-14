#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 9329069329834751805ULL;
long long int var_10 = 4209689150061132033LL;
signed char var_14 = (signed char)-111;
int zero = 0;
unsigned char var_15 = (unsigned char)207;
unsigned long long int var_16 = 14869634352003545244ULL;
int var_17 = 1160482177;
unsigned int var_18 = 2723710041U;
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
