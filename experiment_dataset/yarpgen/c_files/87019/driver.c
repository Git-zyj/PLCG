#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28994;
unsigned int var_4 = 975923628U;
unsigned short var_6 = (unsigned short)34228;
unsigned short var_8 = (unsigned short)14257;
short var_9 = (short)-31202;
unsigned short var_10 = (unsigned short)9792;
int var_12 = 1372057369;
int zero = 0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
