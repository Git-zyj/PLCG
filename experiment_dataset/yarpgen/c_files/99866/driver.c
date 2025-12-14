#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 8252118598102430231LL;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 1833588132U;
_Bool var_8 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int var_13 = -1543120947;
int zero = 0;
unsigned int var_14 = 2219939741U;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-17893;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
