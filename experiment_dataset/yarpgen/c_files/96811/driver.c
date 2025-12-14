#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 2666338019U;
int var_3 = -118784845;
unsigned long long int var_4 = 11161838478240707543ULL;
int var_5 = 1038152999;
short var_10 = (short)-22495;
short var_11 = (short)-28854;
long long int var_12 = -4872952316210889155LL;
short var_13 = (short)12609;
int zero = 0;
unsigned short var_14 = (unsigned short)990;
int var_15 = -1698536998;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
