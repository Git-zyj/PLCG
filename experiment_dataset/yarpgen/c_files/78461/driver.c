#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8303952760796175691ULL;
_Bool var_4 = (_Bool)0;
long long int var_5 = -4462398025676746390LL;
int zero = 0;
long long int var_16 = -6422298742943209067LL;
long long int var_17 = -4979455033937850778LL;
void init() {
}

void checksum() {
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
