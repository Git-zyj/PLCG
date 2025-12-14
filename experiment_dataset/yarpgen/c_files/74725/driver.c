#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 15144959005021515LL;
_Bool var_2 = (_Bool)0;
short var_4 = (short)-4941;
int var_5 = 1813807329;
unsigned int var_7 = 850474769U;
unsigned long long int var_8 = 17301251359941387423ULL;
int var_11 = -189628653;
signed char var_12 = (signed char)49;
int zero = 0;
long long int var_15 = -893764957891601158LL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 452417941775187009ULL;
int var_18 = 460156043;
void init() {
}

void checksum() {
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
