#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6422769408438633852ULL;
long long int var_4 = 4940726866916809969LL;
long long int var_7 = 647380426346607128LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = 8187684363906490016LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
