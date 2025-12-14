#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1819560646;
unsigned int var_2 = 777483444U;
int var_4 = -1750487267;
long long int var_6 = 4794772629343587282LL;
short var_7 = (short)-23022;
unsigned long long int var_9 = 10966121247241223112ULL;
int zero = 0;
signed char var_11 = (signed char)-96;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)197;
int var_14 = -1786559833;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
