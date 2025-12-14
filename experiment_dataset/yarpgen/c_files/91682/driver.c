#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16665346916159778324ULL;
signed char var_2 = (signed char)42;
unsigned char var_6 = (unsigned char)118;
unsigned long long int var_8 = 11903981337444442663ULL;
long long int var_10 = 3476014918610618609LL;
int zero = 0;
long long int var_17 = -7146765697928537972LL;
int var_18 = -1196087131;
signed char var_19 = (signed char)55;
short var_20 = (short)-22734;
short var_21 = (short)9810;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
