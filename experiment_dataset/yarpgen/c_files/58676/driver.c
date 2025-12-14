#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2140824086;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 1075750042455852441ULL;
unsigned long long int var_8 = 11425462727032572124ULL;
long long int var_11 = -1204235087694597719LL;
int zero = 0;
unsigned long long int var_12 = 6434084661152530698ULL;
unsigned long long int var_13 = 15935283395694328447ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
