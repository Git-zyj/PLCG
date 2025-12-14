#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1677621478269580826LL;
long long int var_2 = -8543419336795895195LL;
unsigned short var_3 = (unsigned short)485;
short var_4 = (short)-14607;
long long int var_6 = 5919753986086613161LL;
long long int var_7 = -8487650541464433857LL;
_Bool var_8 = (_Bool)0;
long long int var_9 = 1090668753978957485LL;
int zero = 0;
short var_10 = (short)20663;
unsigned short var_11 = (unsigned short)64925;
_Bool var_12 = (_Bool)0;
long long int var_13 = 910029717012212382LL;
unsigned int var_14 = 3806063388U;
unsigned char var_15 = (unsigned char)48;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
