#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4203760856U;
long long int var_6 = 7818649759274572110LL;
short var_10 = (short)10099;
int zero = 0;
unsigned int var_11 = 3055688664U;
unsigned int var_12 = 576030471U;
unsigned long long int var_13 = 14880734601279001243ULL;
unsigned long long int var_14 = 17840829142993191568ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
