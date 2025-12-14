#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3968889076U;
int var_3 = 1539323891;
short var_4 = (short)7062;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
int var_12 = -1271184898;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_14 = (short)12609;
unsigned int var_15 = 838911136U;
short var_16 = (short)-26748;
unsigned int var_17 = 4030802129U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
