#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)20349;
signed char var_4 = (signed char)-120;
signed char var_7 = (signed char)96;
unsigned short var_10 = (unsigned short)55956;
unsigned short var_15 = (unsigned short)36960;
int zero = 0;
long long int var_16 = 5165040460986645805LL;
unsigned short var_17 = (unsigned short)41979;
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
