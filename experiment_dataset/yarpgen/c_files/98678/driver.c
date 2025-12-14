#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-69;
unsigned char var_1 = (unsigned char)212;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3040100981U;
unsigned long long int var_5 = 155912559710697962ULL;
unsigned long long int var_6 = 2021686747066017671ULL;
unsigned int var_7 = 3037969392U;
long long int var_8 = 7768274179158603665LL;
long long int var_10 = -4016576149440177835LL;
int zero = 0;
unsigned char var_12 = (unsigned char)167;
unsigned long long int var_13 = 2574826450764319624ULL;
_Bool var_14 = (_Bool)0;
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
