#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43759;
unsigned short var_4 = (unsigned short)37549;
short var_6 = (short)9994;
_Bool var_8 = (_Bool)0;
unsigned int var_14 = 335134247U;
int zero = 0;
signed char var_16 = (signed char)-20;
unsigned int var_17 = 1409156058U;
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
