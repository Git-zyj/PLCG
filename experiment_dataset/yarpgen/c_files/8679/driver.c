#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -268410870;
int var_8 = -2063724552;
unsigned int var_9 = 149839893U;
signed char var_10 = (signed char)-37;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = -1441606951;
int var_19 = 770683854;
short var_20 = (short)28089;
long long int var_21 = -7281274762168467142LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
