#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
short var_6 = (short)27923;
_Bool var_7 = (_Bool)0;
long long int var_8 = -994517061685285344LL;
long long int var_10 = -609284899636457021LL;
short var_11 = (short)-887;
long long int var_12 = -1463511228898183554LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = 7567683889352061028LL;
void init() {
}

void checksum() {
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
