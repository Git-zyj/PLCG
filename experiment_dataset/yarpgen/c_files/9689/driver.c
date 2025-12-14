#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1251458742;
unsigned long long int var_5 = 5775971953387369650ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 17845859770290125124ULL;
int zero = 0;
long long int var_10 = -759609377448086880LL;
signed char var_11 = (signed char)17;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
