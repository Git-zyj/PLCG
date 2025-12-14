#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)175;
int var_2 = -521019558;
signed char var_6 = (signed char)38;
long long int var_7 = -4213532360408684904LL;
long long int var_8 = 8141324164092650423LL;
short var_10 = (short)28703;
short var_11 = (short)11528;
short var_14 = (short)10277;
int zero = 0;
unsigned int var_15 = 2092158323U;
unsigned long long int var_16 = 10194641003565990936ULL;
unsigned int var_17 = 2752210779U;
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
