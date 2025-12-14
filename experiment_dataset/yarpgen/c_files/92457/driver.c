#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-22389;
unsigned long long int var_6 = 16122422409515743893ULL;
unsigned int var_7 = 2798075347U;
signed char var_12 = (signed char)19;
int zero = 0;
unsigned long long int var_14 = 6905285139574850882ULL;
long long int var_15 = 469117444040602024LL;
unsigned int var_16 = 2173986672U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
