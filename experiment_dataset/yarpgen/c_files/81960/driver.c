#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13840;
int var_3 = -390220290;
long long int var_6 = 4728029225617575942LL;
long long int var_11 = 6679961169318241909LL;
int zero = 0;
unsigned long long int var_14 = 11673741599964169731ULL;
unsigned short var_15 = (unsigned short)26865;
unsigned short var_16 = (unsigned short)33008;
long long int var_17 = 2084347446699247274LL;
unsigned int var_18 = 191325245U;
unsigned char var_19 = (unsigned char)194;
unsigned int var_20 = 84820002U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
