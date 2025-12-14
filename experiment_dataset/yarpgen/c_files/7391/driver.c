#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7715208733842972294LL;
unsigned int var_4 = 2117680226U;
int var_6 = -29181933;
int var_7 = -129563981;
signed char var_9 = (signed char)13;
unsigned char var_10 = (unsigned char)198;
int var_11 = 1129402977;
short var_12 = (short)-22956;
short var_13 = (short)3264;
unsigned char var_14 = (unsigned char)71;
unsigned short var_15 = (unsigned short)47871;
int zero = 0;
unsigned long long int var_17 = 8952737591534464592ULL;
unsigned long long int var_18 = 15367332395752716410ULL;
_Bool var_19 = (_Bool)1;
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
