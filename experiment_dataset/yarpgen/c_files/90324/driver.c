#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29495;
unsigned short var_8 = (unsigned short)386;
unsigned long long int var_10 = 14405967202927819313ULL;
unsigned long long int var_14 = 11136867761607288915ULL;
unsigned int var_16 = 2931838563U;
int zero = 0;
unsigned long long int var_18 = 7063600837657652840ULL;
long long int var_19 = 9209932061245442696LL;
signed char var_20 = (signed char)31;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)47287;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
