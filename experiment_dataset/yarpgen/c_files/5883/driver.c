#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)94;
_Bool var_1 = (_Bool)0;
int var_3 = 1140532884;
unsigned char var_6 = (unsigned char)147;
unsigned char var_8 = (unsigned char)183;
signed char var_9 = (signed char)99;
_Bool var_11 = (_Bool)0;
unsigned long long int var_13 = 12011076919915042948ULL;
signed char var_15 = (signed char)-77;
_Bool var_16 = (_Bool)0;
long long int var_17 = 2880252784565257459LL;
short var_18 = (short)15811;
int zero = 0;
unsigned long long int var_20 = 15544852733968346998ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
