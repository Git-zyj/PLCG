#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9803;
unsigned int var_4 = 3375121590U;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 11099897561409526813ULL;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 1681920208U;
signed char var_14 = (signed char)76;
short var_15 = (short)4958;
unsigned int var_18 = 396262550U;
int zero = 0;
short var_20 = (short)-30554;
_Bool var_21 = (_Bool)0;
long long int var_22 = 4223482283950210051LL;
void init() {
}

void checksum() {
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
