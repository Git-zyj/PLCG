#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 888235059U;
_Bool var_1 = (_Bool)1;
unsigned int var_4 = 1523935185U;
unsigned int var_6 = 171888950U;
signed char var_7 = (signed char)-120;
short var_10 = (short)7929;
unsigned char var_11 = (unsigned char)99;
_Bool var_12 = (_Bool)1;
short var_14 = (short)8638;
int zero = 0;
short var_15 = (short)10512;
short var_16 = (short)31362;
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
