#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4953362949191097629LL;
int var_2 = -1313516493;
long long int var_4 = -902210529605064814LL;
unsigned int var_5 = 1965612034U;
signed char var_6 = (signed char)17;
long long int var_7 = 4627256086546416948LL;
unsigned short var_9 = (unsigned short)61357;
int var_10 = -1360799165;
unsigned char var_11 = (unsigned char)187;
unsigned int var_12 = 3119208946U;
int zero = 0;
short var_13 = (short)-13393;
long long int var_14 = -6468224996058127837LL;
signed char var_15 = (signed char)-59;
unsigned short var_16 = (unsigned short)48953;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
