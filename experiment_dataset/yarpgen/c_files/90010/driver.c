#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53822;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)1;
short var_5 = (short)9534;
short var_6 = (short)17978;
short var_11 = (short)-8498;
int var_12 = -761036800;
signed char var_13 = (signed char)93;
short var_14 = (short)28079;
int var_17 = -211222182;
int zero = 0;
int var_19 = 1635691450;
short var_20 = (short)-4849;
long long int var_21 = 7372410821552644237LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
