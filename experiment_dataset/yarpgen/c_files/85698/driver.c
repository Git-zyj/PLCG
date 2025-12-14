#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1672844636;
unsigned long long int var_3 = 2104078780511138357ULL;
signed char var_4 = (signed char)-57;
unsigned int var_6 = 404012605U;
int var_8 = -182159716;
unsigned char var_13 = (unsigned char)173;
int zero = 0;
int var_15 = -1227997569;
unsigned short var_16 = (unsigned short)28054;
unsigned int var_17 = 2577717130U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
