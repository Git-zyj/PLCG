#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1983089830U;
short var_8 = (short)-14546;
unsigned short var_13 = (unsigned short)25423;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)21553;
long long int var_16 = -6260542989595547147LL;
short var_17 = (short)23937;
unsigned short var_18 = (unsigned short)491;
signed char var_19 = (signed char)-33;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)51605;
unsigned int var_22 = 3046928033U;
_Bool var_23 = (_Bool)0;
int var_24 = 1831704749;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
