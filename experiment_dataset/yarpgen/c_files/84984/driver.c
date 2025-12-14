#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1893994237U;
signed char var_1 = (signed char)8;
unsigned char var_2 = (unsigned char)105;
unsigned int var_4 = 1831729198U;
unsigned int var_7 = 4000549074U;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)57494;
unsigned int var_13 = 4150422795U;
long long int var_14 = 2952419522517041342LL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 11702151858736248843ULL;
unsigned int var_17 = 4018572802U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
