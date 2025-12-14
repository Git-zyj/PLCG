#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9201513251352634453ULL;
short var_2 = (short)19775;
long long int var_5 = -7547423435469501880LL;
unsigned long long int var_10 = 7479916145167658679ULL;
int var_12 = 429082664;
short var_15 = (short)-29628;
unsigned char var_18 = (unsigned char)126;
int zero = 0;
long long int var_19 = 3503804143555547128LL;
unsigned long long int var_20 = 10478987717289309747ULL;
unsigned long long int var_21 = 885069808271248181ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
