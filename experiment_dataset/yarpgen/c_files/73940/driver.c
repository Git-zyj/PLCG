#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8979;
unsigned short var_2 = (unsigned short)56264;
unsigned short var_3 = (unsigned short)12604;
_Bool var_4 = (_Bool)0;
int var_5 = 2124652583;
long long int var_6 = -3027635961494249220LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)-59;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)5239;
signed char var_16 = (signed char)100;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
