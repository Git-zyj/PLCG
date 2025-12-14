#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -359945715;
signed char var_2 = (signed char)59;
int var_3 = 1659292345;
short var_4 = (short)-1907;
short var_5 = (short)17696;
unsigned short var_8 = (unsigned short)25653;
int var_9 = 1168954869;
_Bool var_10 = (_Bool)1;
int var_11 = 1442225712;
int var_12 = -2129982661;
unsigned short var_13 = (unsigned short)47943;
signed char var_14 = (signed char)-25;
int zero = 0;
unsigned short var_18 = (unsigned short)5275;
short var_19 = (short)10163;
short var_20 = (short)22799;
unsigned long long int var_21 = 14249839534387688751ULL;
int var_22 = -878845152;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
