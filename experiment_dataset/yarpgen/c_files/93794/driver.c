#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1203878063;
_Bool var_7 = (_Bool)0;
unsigned long long int var_11 = 1872898873621797740ULL;
unsigned long long int var_12 = 5019042329320454073ULL;
int var_13 = 407099393;
int zero = 0;
int var_15 = -963275031;
unsigned int var_16 = 2982294444U;
unsigned long long int var_17 = 2313081157152424141ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
