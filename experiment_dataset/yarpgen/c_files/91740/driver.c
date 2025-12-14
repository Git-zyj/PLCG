#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
short var_3 = (short)-29853;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
short var_7 = (short)-14855;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)0;
short var_15 = (short)15204;
int zero = 0;
short var_16 = (short)25754;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
