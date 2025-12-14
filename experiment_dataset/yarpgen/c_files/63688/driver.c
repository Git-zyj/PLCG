#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24834;
long long int var_3 = 5138137889699386882LL;
unsigned char var_6 = (unsigned char)140;
int var_7 = 186859993;
unsigned int var_8 = 1886068515U;
unsigned long long int var_9 = 3093131303917873621ULL;
long long int var_10 = 2379357743220620286LL;
unsigned char var_11 = (unsigned char)159;
signed char var_12 = (signed char)-67;
unsigned int var_14 = 3429507879U;
int zero = 0;
short var_15 = (short)-21784;
signed char var_16 = (signed char)63;
short var_17 = (short)560;
long long int var_18 = 7547848056826246659LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
