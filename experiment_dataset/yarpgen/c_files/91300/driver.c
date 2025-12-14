#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2729520295U;
short var_5 = (short)-7342;
unsigned short var_12 = (unsigned short)21261;
unsigned long long int var_14 = 11173214826384812864ULL;
unsigned int var_16 = 586247176U;
int zero = 0;
long long int var_17 = -5556277733475176152LL;
signed char var_18 = (signed char)8;
long long int var_19 = -3783225956094887960LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
