#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -1539954811457956497LL;
int var_6 = -1644887875;
int var_9 = -1164646186;
unsigned int var_10 = 197225208U;
long long int var_13 = -3253315578512928287LL;
int zero = 0;
unsigned int var_16 = 1696170271U;
long long int var_17 = -795992287557395318LL;
_Bool var_18 = (_Bool)0;
long long int var_19 = 2809688856791473081LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
