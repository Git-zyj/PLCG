#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_4 = 293272713;
int var_8 = 1393223054;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)6;
int var_12 = -1656952477;
int var_13 = 313443074;
unsigned char var_15 = (unsigned char)183;
unsigned char var_16 = (unsigned char)14;
int zero = 0;
unsigned char var_17 = (unsigned char)99;
int var_18 = 75090584;
int var_19 = 748761983;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
