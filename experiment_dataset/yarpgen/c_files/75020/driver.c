#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1685630192;
unsigned short var_7 = (unsigned short)15100;
_Bool var_9 = (_Bool)1;
unsigned int var_11 = 3837877758U;
signed char var_12 = (signed char)52;
long long int var_13 = -8828868710468305286LL;
int zero = 0;
short var_14 = (short)-13434;
signed char var_15 = (signed char)54;
void init() {
}

void checksum() {
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
