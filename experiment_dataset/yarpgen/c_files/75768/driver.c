#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 428699301U;
signed char var_2 = (signed char)112;
int var_3 = 824394244;
unsigned long long int var_5 = 2191130188357311930ULL;
signed char var_6 = (signed char)88;
signed char var_7 = (signed char)105;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 11601171939065203227ULL;
signed char var_11 = (signed char)-53;
int var_12 = 1615988355;
signed char var_13 = (signed char)-94;
int zero = 0;
unsigned long long int var_16 = 7246414307407186417ULL;
unsigned int var_17 = 646418054U;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
