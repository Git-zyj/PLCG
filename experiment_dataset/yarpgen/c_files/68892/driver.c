#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -693651233497245411LL;
unsigned short var_2 = (unsigned short)59096;
long long int var_3 = -4447142517685543540LL;
long long int var_4 = 3810052036742534535LL;
int var_9 = -1203426056;
unsigned int var_10 = 3623241145U;
unsigned long long int var_12 = 12687452082784505491ULL;
unsigned int var_13 = 3676024381U;
long long int var_14 = 8660780284916963940LL;
unsigned short var_16 = (unsigned short)45226;
int zero = 0;
int var_18 = 281697452;
int var_19 = -1043348747;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
