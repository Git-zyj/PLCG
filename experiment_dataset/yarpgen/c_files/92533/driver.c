#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2361673677U;
unsigned long long int var_2 = 8779848352681805847ULL;
int var_3 = -284109221;
int var_5 = 1346411950;
long long int var_8 = 5077999248538959343LL;
unsigned short var_9 = (unsigned short)20701;
unsigned int var_11 = 910082661U;
int zero = 0;
long long int var_12 = 2337517085838460420LL;
short var_13 = (short)-28254;
unsigned short var_14 = (unsigned short)43069;
void init() {
}

void checksum() {
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
