#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -560024091;
int var_5 = 1064329652;
long long int var_10 = -6968114020236187944LL;
unsigned char var_16 = (unsigned char)70;
long long int var_17 = 7421430255615252777LL;
int zero = 0;
long long int var_18 = 7214174993279842006LL;
unsigned long long int var_19 = 13463169201208822695ULL;
long long int var_20 = -485290956991275796LL;
unsigned int var_21 = 1586875878U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
