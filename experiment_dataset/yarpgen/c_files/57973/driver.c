#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2151946745U;
short var_1 = (short)-31276;
long long int var_3 = 5761762659418082855LL;
unsigned int var_5 = 1704104809U;
signed char var_9 = (signed char)17;
int zero = 0;
unsigned char var_14 = (unsigned char)160;
long long int var_15 = 5126284600756439280LL;
signed char var_16 = (signed char)-29;
long long int var_17 = -3044682834306651606LL;
short var_18 = (short)9299;
unsigned int var_19 = 1726301332U;
long long int var_20 = 5125380867690080900LL;
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
