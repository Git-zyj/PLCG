#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-24;
unsigned long long int var_2 = 11335143374696289657ULL;
unsigned long long int var_5 = 1939802598575877201ULL;
short var_6 = (short)-4768;
unsigned long long int var_8 = 10363100937768099336ULL;
signed char var_9 = (signed char)-79;
int zero = 0;
signed char var_10 = (signed char)82;
unsigned int var_11 = 1308230087U;
short var_12 = (short)-12916;
unsigned long long int var_13 = 9099162779533253144ULL;
unsigned int var_14 = 1462108892U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
