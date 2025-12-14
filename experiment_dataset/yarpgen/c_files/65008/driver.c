#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 123306742226828717ULL;
signed char var_5 = (signed char)-67;
long long int var_7 = -5143475942669116845LL;
int var_9 = -1002247185;
unsigned long long int var_12 = 9881312326736720679ULL;
unsigned short var_13 = (unsigned short)26341;
unsigned int var_15 = 2448073770U;
int var_16 = 2022692738;
int var_17 = 828295518;
int zero = 0;
unsigned long long int var_18 = 18240156495069029575ULL;
unsigned long long int var_19 = 919464247538179240ULL;
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
