#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1305991764;
_Bool var_1 = (_Bool)0;
int var_3 = 1987887835;
int var_5 = 1555541378;
_Bool var_14 = (_Bool)0;
short var_15 = (short)6434;
long long int var_17 = 7343478742518137858LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)7794;
int var_22 = -2013256390;
long long int var_23 = 4040164441725013527LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
