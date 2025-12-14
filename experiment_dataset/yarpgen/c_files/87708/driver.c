#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1521281518620508055LL;
short var_5 = (short)16271;
int var_6 = -224480398;
unsigned short var_7 = (unsigned short)34338;
unsigned char var_10 = (unsigned char)174;
int zero = 0;
unsigned long long int var_17 = 17596889908167332796ULL;
short var_18 = (short)-30986;
signed char var_19 = (signed char)30;
unsigned int var_20 = 1375943254U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
