#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1691571517U;
unsigned long long int var_10 = 11421737259738879308ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_19 = 8312064598806503488LL;
unsigned long long int var_20 = 12653772438728121177ULL;
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
