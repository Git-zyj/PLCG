#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -62872951;
short var_1 = (short)30578;
signed char var_2 = (signed char)21;
unsigned short var_4 = (unsigned short)63886;
unsigned short var_5 = (unsigned short)48466;
short var_8 = (short)3472;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)77;
unsigned int var_13 = 1645487100U;
unsigned int var_14 = 187348210U;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 750435838U;
int var_18 = 1657963833;
unsigned short var_19 = (unsigned short)52065;
unsigned short var_20 = (unsigned short)64951;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
