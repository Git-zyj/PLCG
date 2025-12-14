#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)36585;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)26242;
unsigned int var_11 = 444405742U;
long long int var_12 = -2265483094847583734LL;
int zero = 0;
long long int var_13 = 6574721578886388098LL;
unsigned short var_14 = (unsigned short)42762;
signed char var_15 = (signed char)73;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-26029;
void init() {
}

void checksum() {
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
