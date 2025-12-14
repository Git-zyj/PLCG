#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1284875147;
int var_3 = 1737257924;
long long int var_4 = 3913234587040352170LL;
long long int var_7 = -6377734033012890360LL;
long long int var_9 = -5933478612179868874LL;
unsigned long long int var_13 = 175286537866396180ULL;
signed char var_15 = (signed char)0;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 6419434955267861296ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
