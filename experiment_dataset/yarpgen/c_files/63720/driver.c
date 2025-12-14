#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-9683;
unsigned short var_10 = (unsigned short)24842;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)33261;
int zero = 0;
long long int var_16 = -1551764570805415669LL;
unsigned short var_17 = (unsigned short)41979;
short var_18 = (short)8254;
signed char var_19 = (signed char)-84;
signed char var_20 = (signed char)111;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
