#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2019940325U;
unsigned short var_2 = (unsigned short)7402;
signed char var_3 = (signed char)-36;
int var_4 = -1541567571;
unsigned char var_5 = (unsigned char)200;
unsigned char var_6 = (unsigned char)238;
long long int var_7 = -3786200549876395394LL;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 4192860298U;
int var_10 = -1111605150;
int zero = 0;
unsigned int var_11 = 2127739234U;
unsigned long long int var_12 = 5238263218618192084ULL;
unsigned short var_13 = (unsigned short)13524;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
