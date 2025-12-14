#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34560;
int var_1 = -544982935;
unsigned long long int var_4 = 9380576837697374942ULL;
unsigned int var_6 = 1975801606U;
unsigned int var_7 = 2836224168U;
unsigned long long int var_10 = 11989731370029109225ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)60080;
int var_13 = 1622689374;
unsigned long long int var_14 = 12789466532940798508ULL;
unsigned int var_15 = 1888923866U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
