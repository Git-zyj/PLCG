#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2478063327904330571LL;
int var_6 = -584706509;
short var_9 = (short)-8674;
unsigned long long int var_14 = 856494998917906707ULL;
unsigned int var_15 = 1950070452U;
unsigned int var_16 = 3086218173U;
int zero = 0;
long long int var_18 = 5315543445033031745LL;
short var_19 = (short)16469;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
