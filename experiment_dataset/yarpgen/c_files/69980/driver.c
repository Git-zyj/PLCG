#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1833078079U;
_Bool var_1 = (_Bool)1;
unsigned int var_4 = 3464727439U;
long long int var_7 = -5987057518827442722LL;
unsigned int var_8 = 3717330796U;
unsigned short var_10 = (unsigned short)42040;
int var_11 = -187879243;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 12843791202150777816ULL;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2212055970U;
long long int var_17 = 87056764464883489LL;
long long int var_18 = 7905294434202956504LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
