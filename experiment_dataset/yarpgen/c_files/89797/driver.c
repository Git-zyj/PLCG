#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)92;
short var_1 = (short)-16803;
unsigned int var_5 = 4077136512U;
_Bool var_6 = (_Bool)0;
_Bool var_10 = (_Bool)1;
int var_11 = 1054029867;
short var_12 = (short)4397;
int zero = 0;
unsigned short var_15 = (unsigned short)55197;
int var_16 = -1200199151;
int var_17 = -832729302;
short var_18 = (short)20917;
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
