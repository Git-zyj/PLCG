#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12931863925980765109ULL;
unsigned long long int var_3 = 10352010711319556990ULL;
unsigned int var_4 = 1715746133U;
short var_5 = (short)-18382;
unsigned short var_6 = (unsigned short)41507;
unsigned short var_8 = (unsigned short)55971;
short var_10 = (short)20713;
int zero = 0;
signed char var_11 = (signed char)-114;
unsigned long long int var_12 = 8034248298589465327ULL;
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
